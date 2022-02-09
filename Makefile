#	Colors
CYAN	= '\033[0;36m'
RED		= '\033[0;31m'
BLUE	= '\033[0;34m'

#	MAKE VARIABLES
NAME	= libftprintf.a
LIBFT	= libft
CFLAGS	= -Wall -Werror -Wextra -I.
RM		= rm -f
CC		= gcc
AR		= ar rcs
SRC_DIR	= src
INC_DIR	= includes
OBJ_DIR	= obj
PRINTF	= LC_NUMERIC="en_US.UTF-8" printf

SRC		= ft_printf.c

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))


all:	$(NAME)

$(NAME) : $(OBJ)
	@make -C $(LIBFT)
	@cp libft/libft.a ./$(NAME)
	@$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(PRINTF) "$(BLUE)Compiling $<\n"
	@$(CC) $(CFLAGS) -c $< -o $@

test: all
	@$(CC) -c test/tester.c
	@$(CC) main.o $(NAME)
	@./a.out 
	@$(RM) a.out main.o

clean:
	@$(RM) $(OBJ_DIR)/%.o

fclean: clean
	@$(RM) $(NAME)

norm:
	@$(PRINTF) "$(CYAN)\nChecking NORM in src...\n"
	@norminette -R CheckForbiddenSourceHeader $(SRC_DIR) 

normh:
	@$(PRINTF) "$(RED)\nChecking NORM in header...\n"
	@norminette -R CheckForbiddenSourceHeade $(INC_DIR)


re: fclean
	@make all

.PHONY: all clean test fclean norm normh re
