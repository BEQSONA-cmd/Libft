NAME = libft.a

INCLUDES = libft.h

SRC = ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_strlen.c\
	ft_strlcpy.c\
	ft_strlcat.c\
	ft_atoi.c\
	ft_bzero.c\
	ft_memset.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strncmp.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_strnstr.c\
	ft_calloc.c\
	ft_strdup.c

OBJ = $(SRC:%.c=%.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

test: $(NAME)
	$(CC) $(CFLAGS) $(NAME) main.c libft.a
	./a.out

clean:
	rm -f *.o

fclean: clean
	rm -f *t
	rm -f *.a
	rm -f *.out
	clear

re: fclean all

.PHONY: all clean fclean re
