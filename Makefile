NAME =			get_next_line.a
LIB =			get_next_line.h
LIB_BONUS =		get_next_line_bonus.h
SRC =			get_next_line.c get_next_line_utils.c
SRC_OBJS =		$(SRC:.c=.o)
SRC_BONUS =		get_next_line_bonus.c get_next_line_utils_bonus.c
BONUS_OBJS =	$(BONUS:.c=.o)
CC =			@cc
CFLAGS =		-Wall -Wextra -Werror -D BUFFER_SIZE=1

all:		$(NAME)

$(NAME):	$(SRC_OBJS)
			@ar -rcs $(NAME) $(SRC_OBJS) $(LIB)

bonus:		$(SRC_BONUS)
			@ar -rcs $(NAME) $(BONUS_OBJS) $(LIB_BONUS)

clean:
			@rm -f *.o

fclean:		clean
			@rm -f $(NAME)

re:			fclean all

run:
			$(CC) $(CFLAGS) main.c $(NAME)
			@./a.out

.PHONY: all bonus clean fclean re