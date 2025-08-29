CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp RPN.cpp
TARGET = rpn

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)