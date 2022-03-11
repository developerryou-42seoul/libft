NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf

FUNCTIONS = ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isprint.c \
			ft_isascii.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c

OBJECTS = $(FUNCTIONS:.c=.o)

SRCS_DIR = ./srcs/
OBJS_DIR = ./objs/
INCLUDES_DIR = ./includes/

SRCS = $(addprefix $(SRCS_DIR), $(FUNCTIONS))
OBJS = $(addprefix $(OBJS_DIR), $(OBJECTS))

$(NAME) : $(OBJS)
	$(AR) $@ $^

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $@

.PHONY: all clean fclean re bonus

all : $(NAME)
clean :
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)
re : fclean all
bonus : 