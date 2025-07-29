NAME		= ft_cat
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

SRCDIR		= srcs
INCDIR		= includes
SRC			= main.c ft_display_file.c
OBJ			= $(addprefix $(SRCDIR)/, $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(SRCDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re