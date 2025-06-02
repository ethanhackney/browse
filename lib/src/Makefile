INC = -I../../
CFLAGS = $(INC) -std=c++11 				\
	 -Wall -Werror 				\
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

SRC = main.cc lex.cc
CC = g++

safe:
	$(CC) $(SFLAGS) $(SRC) $(SLDFLAGS)

fast:
	$(CC) $(CFLAGS) -O3 $(SRC) $(LDFLAGS)

