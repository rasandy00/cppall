# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: briandri <briandri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/05 03:05:40 by briandri          #+#    #+#              #
#    Updated: 2026/05/05 03:06:35 by briandri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= bsp
CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= Fixed.cpp main.cpp Point.cpp bsp.cpp
OBJ= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Fixed.hpp Point.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
