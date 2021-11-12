# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hjimenez <hjimenez@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 17:38:03 by jpineiro          #+#    #+#              #
#    Updated: 2021/11/12 16:19:10 by hjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS_MAND	=	ft_isalpha.c		\
				ft_isdigit.c		\
				ft_isalnum.c		\
				ft_isascii.c		\
				ft_isprint.c		\
				ft_strlen.c			\
				ft_bzero.c			\
				ft_memset.c			\
		  		ft_memcpy.c			\
				ft_memmove.c		\
		  		ft_strlcpy.c		\
		  		ft_strlcat.c		\
				ft_tolower.c		\
		  		ft_toupper.c		\
				ft_strncmp.c		\
				ft_atoi.c			\
				ft_memchr.c			\
				ft_calloc.c			\
				ft_putendl_fd.c		\
				ft_putchar_fd.c		\
				ft_putstr_fd.c		\
				ft_substr.c			\
				ft_strjoin.c		\
				ft_memcmp.c			\
				ft_strdup.c			\
		  		ft_itoa.c			\
				ft_strmapi.c		\
				ft_striteri.c		\
				ft_strchr.c			\
		  		ft_strrchr.c		\
		 		ft_strnstr.c		\
				ft_strtrim.c		\
				ft_split.c			\
				ft_putnbr_fd.c		\


SRCS_BON	=	ft_lstnew.c			\
				ft_lstadd_front.c	\
				ft_lstsize.c		\
				ft_lstlast.c		\
				ft_lstadd_back.c	\
				ft_lstdelone.c		\
				ft_lstclear.c		\
				ft_lstiter.c		\
				ft_lstmap.c			\

OBJS_MAND	= ${SRCS_MAND:.c=.o}

OBJS_BON	= ${SRCS_BON:.c=.o}


CC		= gcc

RM		= rm -rf

AR		= ar rcs

CFLAGS = -Wall -Werror -Wextra

LFLAGS = -I.

all	:	$(NAME)

$(NAME)	:	$(OBJS_MAND)
		$(AR) $(NAME) $(OBJS_MAND)

%.o:	%.c
		$(CC) $(CFLAGS) -c $< -o $@ $(LFLAGS)

bonus	: $(OBJS_BON)
		$(AR) $(NAME) $(OBJS_BON)

clean	:	
		$(RM) ${OBJS_MAND} ${OBJS_BON}

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY:		all clean fclean re bonus
