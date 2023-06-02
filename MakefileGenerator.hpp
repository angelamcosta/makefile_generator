#ifndef MAKEFILEGENERATOR_HPP
#define MAKEFILEGENERATOR_HPP
# include <string>
# define CC "CC\t\t=\tcc\nFLAGS\t=\t-Wall -Werror -Wextra\n\n"
# define CPP "CC\t\t=\tg++\nFLAGS\t=\t-Wall -Werror -Wextra -std=c++98\n\n"
# define ALL "all:\t\t$(NAME)\n\n"
# define MAKE "$(NAME):\n\t\t\t$(CC) $(FLAGS) $(SRC) -o $(NAME)\n\n"
# define CLEAN "clean:\n\t\t\t$(RM) $(NAME)\n\n"
# define FCLEAN "fclean:\t\tclean\n\n"
# define RE "re:\n\t\t\t@$(MAKE) fclean\n\t\t\t@$(MAKE)"

class MakefileGenerator {
	private:
		std::string project_name_;
		std::string	language_;
		std::string	files_;
	public:
		void	getUserInput(void);
		void	generateMakefile(void);
};

#endif
