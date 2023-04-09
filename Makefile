CFLAGS = -Wall -Wextra -Werror
SRC = ft_check_args.c  second_process_algo.c push_from_a_to_b.c push_from_b_to_a.c algo_utils.c process_algorithm.c new_algorithm.c ft_sort_short.c ft_normkill.c  instructions.c instructions2.c instructions3.c pushing_to_stack.c process_stack.c push_swap.c utils.c sort.c
LIBFT = libft.a
NAME = push_swap
NAME_BONUS = checker
RM = rm -rf
SRC_BONUS = ft_check_args.c checkerrr/inst_checker.c checkerrr/inst_checker2.c checkerrr/inst_checker3.c pushing_to_stack.c utils.c process_stack.c checkerrr/checker.c checkerrr/get_next_line/get_next_line.c checkerrr/get_next_line/get_next_line_utils.c 
OBJ_BONUS = $(SRC_BONUS:.c=.o)
OBJ = $(SRC:.c=.o)

all : $(LIBFT) $(NAME)

$(LIBFT) :
	make -C libft

$(NAME) : $(OBJ)
	
	$(CC)  $(CFLAGS) $^ libft/libft.a -o push_swap

bonus : $(NAME_BONUS)
	
$(NAME_BONUS) : $(OBJ_BONUS)
	$(CC) $(CFLAGS) $^ libft/libft.a -o checker

clean :
	make -C libft clean
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean : clean
	make -C libft fclean
	$(RM) $(NAME) 

re : fclean all

