# Makefile for sum.cpp
CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = sum

all: $(TARGET)

$(TARGET): sum.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) sum.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

test: $(TARGET)
	while read -r line; do \
		echo $$line | ./$(TARGET); \
	done < test.txt
