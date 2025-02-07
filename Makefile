	// Place your snippets for makefile here. Each snippet is defined under a snippet name and has a prefix, body and 
	// description. The prefix is what is used to trigger the snippet and the body will be expanded and inserted. Possible variables are:
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. Placeholders with the 
	// same ids are connected.
	// Example:
	"Print to console": {
		"prefix": "make",
		"body": [
			"NAME        =     myprogram",
			"CPPC        =     c++",
			"FLAGS       =     -Werror -Wall -Wextra -std=c++98",
			"SRCS        =     -------------->ls *.c*",
			"OBJS        =     $(SRCS:.cpp=.o)",
			"",
			"all: clear fclean $(NAME) clean run",
			"",
			"$(NAME): $(OBJS)",
			"    $(CPPC) $(FLAGS) $(OBJS) -o $(NAME)",
			"",
			"clean:",
			"    rm -f $(OBJS)",
			"",
			"fclean: clean",
			"    rm -f $(NAME)",
			"",
			"re: fclean $(NAME)",
			"",
			"clear:",
			"    clear",
			"",
			"run:",
			"    ./myprogram",
			"",
			"valg: clear $(NAME) clean",
			"    valgrind ./myprogram",
			"",
			"seg: FLAGS += -fsanitize=address",
			"",
			"seg: clear $(NAME) clean run",
			"",
			"deepclean:",
			"find . -maxdepth 1 -type f ! \\( -name \"*.c\" -o -name \"*.cpp\" -o -name \"*.h\" -o \\",
			"-name \"*.hpp\" -o -name \"*.pdf\" -o -name \"Makefile\" \\) -delete",
		],
		"description": "Log output to console"
	}
}
