# Makefile for compiling, cleaning, and running a program

# Define the compiler and flags
CXX = g++
CXXFLAGS = -Wall -g

# Define the target executable
TARGET = quadraticSolver

# Define the source files
SRC = quadraticSolver.cpp

# Default target to compile the program
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Clean up build files
clean:
	rm -f $(TARGET)

# Run or test the program
test: $(TARGET)
	./$(TARGET)

run: test
