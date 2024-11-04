CXX = g++
CXXFLAGS = -Wall -std=c++11

all: fizzBuzz

fizzbuzz: fizzBuzz.cpp
	$(CXX) $(CXXFLAGS) -o fizzBuzz fizzBuzz.cpp

run-fizzBuzz: fizzBuzz
	./fizzBuzz

clean:
	rm -f fizzBuzz 

test: fizzbuzz 
	@echo "Running FizzBuzz Test"
	./fizzBuzz > output_fizzBuzz.txt
	diff output_fizzBuzz.txt test.txt && echo "FizzBuzz Test Passed" || echo "FizzBuzz Test Failed"
