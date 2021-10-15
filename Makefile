# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jparejo- <jparejo-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 10:49:56 by jparejo-          #+#    #+#              #
#    Updated: 2021/10/15 13:58:40 by jparejo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c ft_strdup.c \
					ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
					ft_memcpy.c  ft_strchr.c  ft_strlcpy.c ft_strnstr.c \
					ft_tolower.c ft_bzero.c   ft_isascii.c ft_memcpy.c \
					ft_memmove.c ft_strlen.c  ft_strrchr.c ft_calloc.c \
					ft_toupper.c ft_isdigit.c ft_memchr.c  ft_memset.c \
					ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
					ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
					ft_putstr_fd.c ft_striteri.c ft_strmapi.c

OBJS			= $(SRCS:.c=.o)

BONUS			=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
					ft_lstadd_back.c ft_lstdelone.c ft_lstiter.c ft_lstclear.c

BONUS_OBJS		= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re
