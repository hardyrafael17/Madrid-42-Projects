# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hjimenez <hjimenez@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/08 13:03:20 by adiaz-lo          #+#    #+#              #
#    Updated: 2021/10/13 10:12:17 by hjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS_MAND	=	ft_isdigit.c	\
				ft_isalpha.c	\
				ft_isalnum.c	\
		  		ft_isascii.c	\
		 		ft_isprint.c	\
		  		ft_strlen.c		\
		  		ft_bzero.c		\
				ft_memset.c		\
		  		ft_memcpy.c		\
		  		ft_memmove.c	\
		  		ft_strlcpy.c	\
		  		ft_strlcat.c	\
		  		ft_toupper.c	\
		  		ft_tolower.c	\
		 	 	ft_strchr.c		\
		 		ft_strrchr.c	\
				ft_strncmp.c	\
		  		ft_memchr.c		\
		  		ft_memcmp.c		\
		  		ft_strnstr.c	\
		  		ft_atoi.c		\
		  		ft_calloc.c		\
		  		ft_strdup.c		\
				ft_substr.c		\
				ft_strjoin.c	\
				ft_strtrim.c	\
				ft_split.c		\
				ft_itoa.c		\
#		  		ft_memmove.c	\
		  		ft_memccpy.c	\
		  		ft_isalpha.c	\
				ft_strmapi.c	\
				ft_putchar_fd.c	\
				ft_putstr_fd.c	\
				ft_putendl_fd.c	\
				ft_putnbr_fd.c

# SRCS_BON	=	ft_lstnew.c			\
				ft_lstadd_front.c	\
				ft_lstsize.c		\
				ft_lstlast.c		\
				ft_lstadd_back.c	\
				ft_lstdelone.c		\
				ft_lstclear.c		\
				ft_lstiter.c		\
				ft_lstmap.c

OBJS_MAND	= ${SRCS_MAND:.c=.o}

OBJS_BON	= ${SRCS_BON:.c=.o}

CC		= cc

RM		= rm -rf

AR		= ar rcs

RANLIB		= ranlib

CFLAGS += -Wall -Werror -Wextra -g

LFLAGS += -I.

all	:	$(NAME)
		@echo Compiling Library "libft.a" File "Only Mandatory Part": $@ ...

$(NAME)	:	$(OBJS_MAND)
		@echo Compiling Library File: $@ ...
		$(AR) $(NAME) $(OBJS_MAND)
		$(RANLIB) $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS_MAND) $(SRCS_BON)
	gcc -nostartfiles -shared -o libft.so $(OBJS_MAND) $(OBJS_BON)

%.o:	%.c
		@echo Compiling Binary Files: $@ ...
		$(CC) $(CFLAGS) -c $< -o $@ $(LFLAGS)


bonus	:	$(OBJS_MAND) $(OBJS_BON) libft.h
		$(AR) $(NAME) $(OBJS_BON) $(OBJS_MAND)
		@echo Compiling Library "libft.a" File "Mandatory + Bonus Part": $@ ...

clean	:	
		@echo Cleaning The .o Generated Files: $@ ...
		$(RM) ${OBJS_MAND} ${OBJS_BON}

fclean	:	clean
		@echo Cleaning All ".o & libft.a" Generated Files:
		$(RM) $(NAME) *.so

re	:	fclean all
		@echo Cleaning All ".o & libft.a" Generated Files And Remake Everything:

.PHONY:		all clean fclean re bonus