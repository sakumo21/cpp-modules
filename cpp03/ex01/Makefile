CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp
TARGET = test

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean