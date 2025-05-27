LIB    = $(shell pkg-config --cflags --libs cairo x11)
CFLAGS = $(LIB) -std=c++11 	\
	-Wall  			\
	-Werror                 \
	-Wextra                 \
	-Wconversion            \
	-Wsign-conversion       \
	-Wshadow                \
	-Wpointer-arith         \
	-Wcast-align            \
	-Wuninitialized         \
	-Winit-self             \
	-Wundef                 \
	-Wredundant-decls       \
	-Wwrite-strings         \
	-Wformat=2              \
	-Wswitch-enum           \
	-Wstrict-overflow=5     \
	-Wno-unused-parameter   \
	-pedantic
SFLAGS = $(CFLAGS) -fsanitize=address,undefined
FFLAGS = $(CFLAGS) -O3
SRC    = main.cc
CC     = g++

safe:
	$(CC) $(SFLAGS) $(SRC)

fast:
	$(CC) $(FFLAGS) $(SRC)
