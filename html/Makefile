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
ELEM_SRC = $(wildcard elem/src/*.cc)
ELEM_OBJ = $(ELEM_SRC:elem/src/%.cc=obj/%.o)
CC = g++ -std=c++20

safe: yy.o main.cc $(ELEM_OBJ) obj/tabs.o
	$(CC) $(SFLAGS) -o slow $^ $(SLDFLAGS)
	rm yy.o

obj/tabs.o: gen/okattr.awk
	./gen/okattr.awk gen/okattrtab >tabs.c
	gcc $(CFLAGS) -c -o $@ tabs.c

yy.o: lex.yy.cc
	$(CC) -o $@ $^

lex.yy.cc: gen/lex.sh gen/tagtab gen/attrtab
	./gen/lex.sh
	flex -o lex.yy.cc html.ll

fast: yy.o main.cc $(ELEM_OBJ) obj/tabs.o
	$(CC) $(CFLAGS) -o fast -O3 $^ $(LDFLAGS)
	rm yy.o

obj/%.o: elem/src/%.cc
	mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf html.l html.h tabs.c obj slow fast yy.o lex.yy.cc html.ll
