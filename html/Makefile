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

safe: yy.o main.cc elem/src/*.cc
	g++ -std=c++11 $(SFLAGS) -o slow $^ $(SLDFLAGS)
	rm yy.o

yy.o: lex.yy.c
	gcc -c -o yy.o lex.yy.c

lex.yy.c: gen/lex.sh gen/tagtab gen/attrtab
	./gen/lex.sh
	flex html.l

fast: yy.o main.cc elem/src/*.cc
	g++ --std=c++11 $(CFLAGS) -o fast -O3 $^ $(LDFLAGS)
	rm yy.o

clean:
	rm -f slow fast yy.o lex.yy.c
