CFLAGS = -Wall					\
	 -Werror 				\
	 -Wextra 				\
	 -Wshadow 				\
         -Wpointer-arith 			\
	 -Wcast-align 				\
	 -Wuninitialized 			\
	 -Winit-self 				\
	 -Wundef 				\
	 -Wredundant-decls 			\
         -Wwrite-strings 			\
	 -Wformat=2 				\
	 -Wswitch-enum 				\
	 -Wstrict-overflow=5 			\
	 -Wno-unused-parameter 			\
	 -pedantic 				\
         $(shell pkg-config --cflags cairo x11)

LDFLAGS = $(shell pkg-config --libs cairo x11)

SFLAGS = $(CFLAGS) -fsanitize=address,undefined
SLDFLAGS = $(LDFLAGS) -fsanitize=address,undefined

safe: yy.o tags.h
	g++ -std=c++11 $(SFLAGS) -o slow main.cc yy.o $(SLDFLAGS)

lex.yy.c: html.l
	flex html.l

yy.o: lex.yy.c
	gcc -c -o yy.o lex.yy.c

tags.h: tags.gperf
	gperf --output-file=tags.h tags.gperf

fast: lex
	g++ --std=c++11 $(CFLAGS) -o fast -O3 main.cc yy.o $(LDFLAGS)
