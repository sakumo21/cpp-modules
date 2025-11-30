CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp RPN.cpp
NAME = rpn

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(OBJS) $(NAME)
clean:
	rm -f $(OBJS)
re:fclean all