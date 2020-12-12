# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atomatoe <atomatoe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/30 14:57:53 by atomatoe          #+#    #+#              #
#    Updated: 2020/11/30 16:02:14 by atomatoe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

INCLUDE = phonebook.hpp

SRCS = phonebook.cpp

OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
		clang++  $(CFLAGS) $(SRCS) -o $(NAME)

%.o: %.c $(INCLUDE)
		clang++ $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re