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

safe: yy.o main.cc $(ELEM_OBJ) obj/tabs.o
	g++ -std=c++11 $(SFLAGS) -o slow $^ $(SLDFLAGS)
	rm yy.o

obj/tabs.o: gen/okattr.awk
	./gen/okattr.awk gen/okattrtab >tabs.c
	gcc $(CFLAGS) -c -o $@ tabs.c

yy.o: lex.yy.c
	gcc -c -o $@ $^

lex.yy.c: gen/lex.sh gen/tagtab gen/attrtab
	./gen/lex.sh
	flex html.l

fast: yy.o main.cc $(ELEM_OBJ) obj/tabs.o
	g++ --std=c++11 $(CFLAGS) -o fast -O3 $^ $(LDFLAGS)
	rm yy.o

obj/%.o: elem/src/%.cc
	g++ --std=c++11 $(CFLAGS) -c $< -o $@

clean:
	rm -rf html.l html.h tabs.c obj slow fast yy.o lex.yy.c
