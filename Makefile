# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/28 09:00:48 by mgeorges          #+#    #+#              #
#    Updated: 2025/05/28 09:03:47 by mgeorges         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = ex00
C++         = c++
C++_FLAGS   = -Wall -Wextra -Werror -std=c++98

SRC_DIR     = .
OBJ_DIR     = build

SRCS        = main.cpp \
              Animal.cpp Dog.cpp Cat.cpp \
              WrongAnimal.cpp WrongCat.cpp

OBJS        = $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Compiling [$(NAME)]...$(C++_FLAGS)"
	@$(C++) $(C++_FLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all