# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcavallu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/10 12:06:52 by lcavallu          #+#    #+#              #
#    Updated: 2022/04/15 17:17:24 by lcavallu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Animal

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98 #-fsanitize=address

INCLUDE	= include

SRC_PATH	= src

OBJ_PATH	= obj

SOURCES =	main.cpp \
			Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \
			Brain.cpp

SRC	= $(addprefix $(SRC_PATH)/,$(SOURCES))

OBJ	= $(addprefix $(OBJ_PATH)/,$(SOURCES:.cpp=.o))

NOC		= \033[0m
RED		= \033[1;31m
GREEN	= \033[1;32m
YELLOW	= \033[1;33m
BLUE	= \033[1;34m
WHITE	= \033[1;37m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $@ $^
	@echo "$(GREEN)$@$(NOC)"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp $(INCLUDE)
	@mkdir -p obj
	@$(CC) $(FLAGS) -I$(INCLUDE) -c -o $@ $<
	@echo "$(BLUE)gcc $(WHITE)$(notdir $@)$(NOC)"

clean:
	@echo "$(RED)clean$(NOC)"
	@rm -rf $(OBJ_PATH)

fclean: clean
	@echo "$(RED)fclean$(NOC)"
	@rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
