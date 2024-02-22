# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalombar <jalombar@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/22 15:13:32 by jalombar          #+#    #+#              #
#    Updated: 2024/02/22 16:11:02 by jalombar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc -c
CFLAGS = -Wall -Werror -Wextra
SRCS = $(wildcard srcs/*.c)
OBJS = $(SRCS:.c=.o)
HEADER = $(wildcard includes/ft.h)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJS)	

fclean: clean
	rm -f $(NAME)

re: fclean all
