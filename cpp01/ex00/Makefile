CPP = c++
CPPFLAGS = -Wall -Wextra -std=c++98

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
TARGET = test

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean