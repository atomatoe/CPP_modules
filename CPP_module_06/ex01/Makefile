# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/30 14:57:44 by atomatoe          #+#    #+#              #
#    Updated: 2020/12/10 22:07:05 by atomatoe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialization

SRCS = serialization.cpp

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