# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcosta-s <pcosta-s@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/20 12:41:21 by pcosta-s          #+#    #+#              #
#    Updated: 2022/12/07 21:07:50 by pcosta-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# Compiler Options:
# cc		UNIX Compiler Command.
# gcc		GNU Compiler operating system.
CC = cc

# Flags:
# -Wall		Enables compiler warnings.
# -Werror	Make all warnings into errors.
# -Wextra	This enables some extra warning flags that are not enabled by -Wall.
CFLAGS = -Wall -Werror -Wextra

SRC = ft_strlen.c ft_strlcat.c ft_strlcpy.c ft_strnstr.c ft_strchr.c ft_atoi.c \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
		ft_tolower.c ft_memcmp.c ft_memmove.c ft_bzero.c ft_memcpy.c ft_calloc.c \
		ft_memchr.c ft_strrchr.c ft_memset.c ft_strdup.c ft_strncmp.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_striteri.c ft_substr.c ft_strmapi.c \
		ft_strjoin.c ft_putstr_fd.c ft_putnbr_fd.c ft_itoa.c ft_split.c ft_strtrim.c

OBJ = $(SRC:.c=.o)
		
BSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
		
BOBJ = $(BSRC:.c=.o)

# Files ending in .o depend on the same file name ending in .c
.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

# ar: Create or maintain library archives:
# rcs: replace, create, sort.

all:	$(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

bonus:	$(NAME) $(BOBJ) $(OBJ)
		ar rcs $(NAME) $(BOBJ) $(OBJ)

clean:
		rm -f $(OBJ) $(BOBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean	$(NAME)

.PHONY:	all clean fclean re