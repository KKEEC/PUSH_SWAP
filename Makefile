# Variables
NAME = pushswap
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I .
LIBFT_SRC = libft.c
PRINTFT_SRC = printft.c
PUSHSWAP_SRC = main.c other_source_files.c
LIBFT_OBJ = $(LIBFT_SRC:.c=.o)
PRINTFT_OBJ = $(PRINTFT_SRC:.c=.o)
PUSHSWAP_OBJ = $(PUSHSWAP_SRC:.c=.o)

# Rules
all: $(NAME)

$(NAME): $(LIBFT_OBJ) $(PRINTFT_OBJ) $(PUSHSWAP_OBJ)
    $(CC) $(CFLAGS) -o $(NAME) $(LIBFT_OBJ) $(PRINTFT_OBJ) $(PUSHSWAP_OBJ)

%.o: %.c
    $(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
    rm -f $(LIBFT_OBJ) $(PRINTFT_OBJ) $(PUSHSWAP_OBJ)

fclean: clean
    rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
