NAME            =       ex02

CC              =       c++

FLAG            =       -Wall -Wextra -Werror -std=c++98 -g 

C_FILE          =       Fixed.cpp	\
						main.cpp \

SRC_DIR         =       ./

INC_DIR         =       ./

SRC                     =       $(addprefix $(SRC_DIR),$(C_FILE))

OBJ                     =       $(SRC:.cpp=.o)

.cpp.o:
	$(CC) $(FLAG) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[0;33m\nCOMPILING EX02...\n"
	$(CC) $(FLAG) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./$(NAME) created\n"

clean:
	@echo "\033[0;31mDeleting objects...\n"
	@rm $(OBJ)
	@echo "\033[1;32mDone\n"

fclean:
	@echo "\033[0;31mDeleting executable..."
	@rm  $(OBJ) $(NAME)
	@echo "\033[1;32mDone\n"

re: fclean all

.PHONY: all clean fclean re