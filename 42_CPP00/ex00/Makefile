NAME            =       megaphone

CC              =       c++

FLAG            =       -Wall -Wextra -Werror -std=c++98

C_FILE          =       megaphone.cpp                                          \



SRC_DIR         =       ./

INC_DIR         =       ./

SRC                     =       $(addprefix $(SRC_DIR),$(C_FILE))

OBJ                     =       $(SRC:.cpp=.o)

.cpp.o:
	$(CC) $(FLAG) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[0;33m\nCOMPILING EX00...\n"
	$(CC) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./megaphone created\n"

clean:
	@echo "\033[0;31mDeleting objects...\n"
	@rm -rf $(OBJ)
	@echo "\033[1;32mDone\n"

fclean: clean
	@echo "\033[0;31mDeleting executable..."
	@rm  -rf $(NAME)
	@echo "\033[1;32mDone\n"

re: fclean all

.PHONY: all clean fclean re