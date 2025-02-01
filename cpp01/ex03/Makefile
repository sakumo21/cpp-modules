CPP = c++
CPPFLAGS = -Wall -Wextra -std=c++98 -fsanitize=address -g3

SRCS = main.cpp HumanA.cpp HumanB.cpp
TARGET = test

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean