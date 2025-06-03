#!/usr/bin/awk -f

# +===============+
# |data structures|
# +===============+
# 
# dag: directed acylic graph
#   maps attributes to tags that allow that attribute
#
#                 +---------+------+
#                 |         |      |
#                 V         V      |
#   ("access")-("form")-("input")  |
#                 ^                |
#                 |         ("accesskey")
#                 +----+
#                      |
#   ("accept_charset")-+
#
# tags: set of tags
#   set of valid tags
#
#   ["form"]  => 1
#   ["input"] => 1
#
# attrs_ok: map of lists
#   maps tags to attributes that are ok for that tag
#
#   ["form"]  => [ "accept", "accept_charset", "accesskey", ... ]
#   ["input"] => [ "accept", "accesskey", ... ]
#
# nattrs_ok: map of integers
#   maps tags to number of ok attributes for that tag
#
#   ["form"]  => 3
#   ["input"] => 2

# build vertex for attribute:
# 
# args:
#  $1:      attribute name
#  $(2-NF): tags that support attribute
{
  delim = ""
  for (i = 2; i <= NF; i++) {
    if ($i != "*")
      tags[$i] = 1
    dag[$1] = dag[$1] delim $i
    delim = ":"
  }
}

END {
  # for each vertex in dag
  for (v in dag) {
    # get edges
    nedges = split(dag[v], edges, ":")

    # if all tags support attribute
    if (edges[1] == "*") {
      # add attribute to every tag
      for (tag in tags)
        attrs_ok[tag,++nattrs_ok[tag]] = v
    } else {
      # for each edge
      for (i = 1; i <= nedges; i++) {
        # add supported attribute to tag
        tag = edges[i]
        attrs_ok[tag,++nattrs_ok[tag]] = v
      }
    }
  }

  # generate attribute map
  printf("static const bool attrs_ok[NR_OPEN][NR_ATTR] = {\n")
  # for each tag
  for (tag in tags) {
    # generate array index for tag
    printf("\t[TAB_IDX(HTML_TT_TAG_%s_OPEN)] = {\n", toupper(tag))

    # generate array index for attributes supported by tag
    for (i = 1; i <= nattrs_ok[tag]; i++)
      printf("\t\t[ATTR_IDX(HTML_TT_ATTR_%s)] = true,\n", toupper(attrs_ok[tag,i]))

    # finalize mapping for tag
    printf("\t},\n")
  }
  printf("};\n")
}
