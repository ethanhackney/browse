#!/usr/bin/awk -f

BEGIN {
  print "static const int ender[(HTML_TT_TAG_END - HTML_TT_TAG_START) + 1] = {"
}

{
  up = toupper($1)
  open_tag = "HTML_TT_TAG_" up "_OPEN"
  close_tag = "HTML_TT_TAG_" up "_CLOSE"

  printf("\t[%s] = %s,\n", open_tag, close_tag)
}

END {
  print "};"

  print "int"
  print "tag_ender(int tt)"
  print "{"
  printf("\treturn ender[TAG_IDX(tt)];\n")
  print "}"
}
