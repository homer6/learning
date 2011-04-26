OBJS = main.o
CC = g++
CFLAGS = -ggdb -Wall
SOURCE_DIR = `pwd`/src
SOURCE = $(wildcard $(SOURCE_DIR)/*.c) $(wildcard $(SOURCE_DIR)/*.cc)
EXEC = encrypt




all: $(EXEC) 

$(EXEC): $(OBJS)
	$(CC) $^ -o $@ -I $(SOURCE_DIR)

main.o : main.cc
	$(CC) $(CFLAGS) -c $< -o $@

memtest: $(EXEC)
	valgrind --tool=memcheck ./$(EXEC)	

