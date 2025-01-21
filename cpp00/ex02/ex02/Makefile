CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++98

SRCS = test.cpp Account.cpp 
TARGET = test

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean