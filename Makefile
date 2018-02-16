NAME1 = checker

NAME2 = push_swap

CC = gcc

FLAG += -Wall -Werror -Wextra -g 

SRC1 = ch_srcs/main.c
	  
SRC2 = p_ssrcs/main.c

OBJ1 = $(SRC1:.c=.o) 

OBJ2 = $(SRC2:.c=.o)

LIBFT = libft/libft.a \

all: 1 2

1:
	@make re -C libft
	@gcc $(FLAG) -o $(NAME1) $(SRC1) $(LIBFT)
	@echo "\033[32;1mChecker Ready"

2:
	@gcc $(FLAG) -o $(NAME2) $(SRC2) $(LIBFT)
	@echo "\033[34;1mPush_Swap Ready"

clean:
	@make clean -C libft
	@rm -f $(OBJ1) $(OBJ2)
	@echo "\033[35;1mCleaned"

fclean:
	@make clean
	@make fclean -C libft
	@rm -f $(OBJ1) $(OBJ2)
	@rm -f $(NAME1) $(NAME2)
	@echo "\033[33;1mfCleaned"

re: fclean all
