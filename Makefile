NAME	=	makegen

RM		=	rm -rf
CC		=	g++
FLAGS	=	-std=c++98

SRC		=	main.cpp MakefileGenerator.cpp MakefileGenerator.h

all:		$(NAME)

$(NAME):
			$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
			$(RM) $(NAME)

fclean:		clean

re:
			@$(MAKE) fclean
			@$(MAKE)