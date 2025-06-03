#!/usr/bin/awk -f

{
  if (length($1) > maxlen)
    maxlen = length($1)

  delim = ""
  for (i = 2; i <= NF; i++) {
    dag[$1] = dag[$1] delim $i
    delim = ":"
  }
}

END {
  for (v in dag) {
    nedges = split(dag[v], edges, ":")
    printf("dag[%s]%*s =>", v, maxlen - length(v), "")
    for (i = 1; i <= nedges; i++)
      printf(" %s", edges[i])
    printf("\n")
  }
}
