# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: obult <obult@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/04 16:49:28 by obult         #+#    #+#                  #
#    Updated: 2020/11/12 22:20:42 by obult         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c ./ft_isprint.c ./ft_atoi.c \
./ft_bzero.c ./ft_calloc.c ./ft_itoa.c ./ft_putchar_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c \
./ft_putstr_fd.c ./ft_split.c ./ft_strjoin.c ./ft_strmapi.c ./ft_strtrim.c \
./ft_substr.c ./ft_memccpy.c ./ft_memchr.c ./ft_memcmp.c ./ft_memcpy.c ./ft_memmove.c \
./ft_memset.c ./ft_strchr.c ./ft_strdup.c ./ft_strlcat.c ./ft_strlcpy.c ./ft_strlen.c \
./ft_strncmp.c ./ft_strnstr.c ./ft_strrchr.c ./ft_tolower.c ./ft_toupper.c

BONUS	= ./bonuslist0.c ./bonuslist1.c

OBJS	= ${SRCS:.c=.o}

BOBJS	= ${BONUS:.c=.o}

CC		= gcc

RM		= rm -f

HEADER	= -I

CFLAGS	= -Wall -Werror -Wextra

LIB		= ar -rsc

all:		${NAME}

.c.o:
				${CC} -c ${CFLAGS} $< -o ${<:.c=.o}
clean:
				${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re:			fclean all

${NAME}:		${OBJS}
				${LIB} ${NAME} ${OBJS}

bonus:		all ${BOBJS}
				${LIB} ${NAME} ${BOBJS}

.PHONY: all clean fclean re