CXX = clang++
CC  = clang
CFLAGS = -std=c17 -Wall -Wextra -O2
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

TARGETS = hello task1_pointers file_sum swap print_2d_array run_game

all: $(TARGETS)

hello: hello-world.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

task1_pointers: task1_pointers.c
	$(CC) $(CFLAGS) -o $@ $<

file_sum: file_sum.c
	$(CC) $(CFLAGS) -o $@ $<

swap: swap.c
	$(CC) $(CFLAGS) -o $@ $<

print_2d_array: print_2d_array.c
	$(CC) $(CFLAGS) -o $@ $<

run_game: tictactoe/main.c tictactoe/game.c tictactoe/game.h
	$(CC) $(CFLAGS) -o $@ tictactoe/main.c tictactoe/game.c

clean:
	rm -f $(TARGETS)
