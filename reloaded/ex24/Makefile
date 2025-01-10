# Compiler and Flags
CC	= cc
CFLAGS	= -Wall -Wextra -Werror

# Directories
SRCDIR	= srcs
INCDIR	= includes
OBJDIR	= objs

# Library
NAME	= libft.a

# Source Files
SRCS	= ft_putchar.c \
	  ft_putstr.c \
	  ft_strcmp.c \
	  ft_strlen.c \
	  ft_swap.c

# Object Files
OBJS	= $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

$(OBJDIR):
	mkdir -p $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
