CFLAGS = -Wall					\
	 -Werror 				\
	 -Wextra 				\
	 -Wconversion 				\
	 -Wsign-conversion 			\
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

SRC = main.cc

safe: lex
	g++ -std=c++11 $(SFLAGS) -o slow $(SRC) yy.o $(SLDFLAGS)
	rm lex.yy.c
	rm yy.o

lex: html.l
	flex html.l
	gcc -c -o yy.o lex.yy.c

fast: lex
	g++ --std=c++11 $(CFLAGS) -o fast -O3 $(SRC) yy.o $(LDFLAGS)
	rm lex.yy.c
	rm yy.o
