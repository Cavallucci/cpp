# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcavallu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/10 12:06:52 by lcavallu          #+#    #+#              #
#    Updated: 2022/03/06 13:40:57 by lcavallu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = phonebook 

CC      = clang++

FLAGS   = -Wall -Wextra -Werror -std=c++98

INCLUDE	= include

SRC_PATH    = src

OBJ_PATH    = obj

SOURCES =	main.cpp 

SRC = $(addprefix $(SRC_PATH)/,$(SOURCES))

OBJ = $(addprefix $(OBJ_PATH)/,$(SOURCES:.cpp=.o))

NOC     = \033[0m
RED     = \033[1;31m
GREEN   = \033[1;32m
YELLOW  = \033[1;33m
BLUE    = \033[1;34m
WHITE   = \033[1;37m

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp $(INCLUDE)/$(NAME).h
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(FLAGS) -I$(INCLUDE) -c -o $@ $<
	@echo "$(BLUE)c++ $(WHITE)$(notdir $@)$(NOC)"

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $@ $^ 
	@echo "$(GREEN)$@$(NOC)"

all: $(NAME)

clean:
	@echo "$(RED)clean$(NOC)"
	@rm -rf $(OBJ_PATH)

fclean: clean
	@echo "$(RED)fclean$(NOC)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

