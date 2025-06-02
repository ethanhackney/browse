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

ELEM_SRC = elem/src/internal.cc \
	   elem/src/text.cc \
	   elem/src/html.cc \
	   elem/src/dump.cc \
	   elem/src/factory.cc

safe: yy.o $(ELEM_SRC)
	g++ -std=c++11 $(SFLAGS) -o slow $(ELEM_SRC) main.cc yy.o $(SLDFLAGS)
	rm yy.o

yy.o: lex.yy.c
	gcc -c -o yy.o lex.yy.c

lex.yy.c: gen/lex.sh tagtab
	./gen/lex.sh
	flex html.l

fast: yy.o $(ELEM_SRC)
	g++ --std=c++11 $(CFLAGS) -o fast -O3 $(ELEM_SRC) main.cc yy.o $(LDFLAGS)
	rm yy.o

clean:
	rm -f slow fast yy.o lex.yy.c
