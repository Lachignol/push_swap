NAME = push_swap 
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3

SRCDIR = srcs
INCLUDEDIR = includes
LIBFTDIR = libft
OBJS_DIR = objs

LIBFT = $(LIBFTDIR)/libft.a

FILES = obligatory_mouvement.c obligatory_reverse_rotate_mouvement.c \
obligatory_rotate_mouvement.c algo_func.c \
list_utils.c main.c check_integrity.c \
error_func.c fill_and_init_stack.c sort_distrib.c \
list_check.c sort_simple.c list_control_value.c \
turkish_utils.c sort_turkish.c check_utils.c

SRCS = $(addprefix $(SRCDIR)/, $(FILES))

OBJS = $(SRCS:$(SRCDIR)/%.c=$(OBJS_DIR)/%.o)

INCLUDES = -I$(INCLUDEDIR) -I$(LIBFTDIR)

all: $(NAME)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: $(SRCDIR)/%.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFTDIR) -lft -o $(NAME)

clean:
	rm -rf $(OBJS_DIR)
	$(MAKE) -C $(LIBFTDIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFTDIR) fclean

re: fclean all

.PHONY: all clean fclean re
