# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/10 00:02:33 by atomatoe          #+#    #+#              #
#    Updated: 2020/12/10 00:19:36 by atomatoe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
		clang++  $(CFLAGS) $(SRCS) -o $(NAME)

%.o: %.c $(INCLUDE)
		clang $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re