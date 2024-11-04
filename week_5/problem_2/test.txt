CXX = g++
CXXFLAGS = -Wall -std=c++11

all: reverseArray

reverse_array: reverseArray.cpp
	$(CXX) $(CXXFLAGS) -o reverseArray reverseArray.cpp

run-reverse: reverseArray
	./reverseArray

clean:
	rm -f reverseArray

test: reverseArray
	@echo "Running Reverse Array Test"
	./reverseArray > output_reverseArray.txt
	diff output_reverseArray.txt test.txt && echo "Reverse Array Test Passed" || echo "Reverse Array Test Failed"
