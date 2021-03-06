NAME = fourinrow
CC = clang++
STD = -std=c++98
SRCS = main.cpp board.cpp check.cpp draw.cpp input.cpp \
	game.cpp

FLAGS = -Wall -Wextra -Werror

$(NAME) : $(SRCS)
	$(CC) $(STD) $(FLAGS) $(SRCS) -o $(NAME)

all	: $(NAME)

clean :
	/bin/rm -rf $(OBJS)

fclean : clean
	/bin/rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re