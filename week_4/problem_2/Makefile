# Makefile for multiplication.cpp
CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = multiplication

all: $(TARGET)

$(TARGET): multiplication.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) multiplication.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

test: $(TARGET)
	while read -r line; do \
		echo $$line | ./$(TARGET); \
	done < test.txt
