#!/usr/bin/awk -f

{
  if (length($1) > maxlen)
    maxlen = length($1)

  delim = ""
  for (i = 2; i <= NF; i++) {
    if ($i != "*")
      tags[$i] = 1
    dag[$1] = dag[$1] delim $i
    delim = ":"
  }
}

END {
  for (v in dag) {
    nedges = split(dag[v], edges, ":")
    if (edges[1] == "*") {
      for (tag in tags) {
        attrs_ok[tag,++nattrs_ok[tag]] = v
      }
    } else {
      for (i = 1; i <= nedges; i++) {
        tag = edges[i]
        attrs_ok[tag,++nattrs_ok[tag]] = v
      }
    }
  }

  for (tag in tags) {
    printf("[TAB_IDX(HTML_TT_TAG_%s_OPEN)] = {\n", toupper(tag))
    for (i = 1; i <= nattrs_ok[tag]; i++)
      printf("\t[ATTR_IDX(%s)] = true,\n", attrs_ok[tag,i])
    printf("},\n")
  }
}
