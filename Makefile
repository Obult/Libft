# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: obult <obult@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/04 16:49:28 by obult         #+#    #+#                  #
#    Updated: 2020/11/04 22:02:41 by obult         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= ./isalnum.c ./isalpha.c ./isascii.c ./isdigit.c ./isprint.c ./atoi.c \
./bzero.c ./calloc.c ./ft_itoa.c ./ft_putchar_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c \
./ft_putstr_fd.c ./ft_split.c ./ft_strjoin.c ./ft_strmapi.c ./ft_strtrim.c \
./ft_substr.c ./memccpy.c ./memchr.c ./memcmp.c ./memcpy.c ./memmove.c \
./memset.c ./strchr.c ./strdup.c ./strlcat.c ./strlcpy.c ./strlen.c \
./strncmp.c ./strnstr.c ./strrchr.c ./tolower.c ./toupper.c

BONUS	= ./bonus/list.c

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