# Compiler and flags
CC = g++
CFLAGS = -Wall -std=c++11

# Target executable
TARGET = main

# All source files
SRCS = $(Problem1 *.cpp)
OBJS = $(SRCS:.cpp=.o)

# Default target: compile the code
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Rule to clean up compiled files
clean:
	rm -f $(OBJS) $(TARGET)

# Rule to run the compiled program
run: $(TARGET)
	./$(TARGET)

# Alias for run
test: run
