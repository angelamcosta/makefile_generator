NAME	=	makegen

RM		=	rm -rf
CC		=	g++
FLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		=	main.cpp MakefileGenerator.cpp MakefileGenerator.hpp

all:		$(NAME)

$(NAME):
			$(CC) $(SRC) $(FLAGS) -o $(NAME)

clean:
			$(RM) $(NAME)

fclean:		clean

re:
			@$(MAKE) fclean
			@$(MAKE)