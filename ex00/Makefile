# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 20:44:34 by dcarvalh          #+#    #+#              #
#    Updated: 2024/08/23 14:53:09 by dcarvalh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Bureaucrat
CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRCS =	Bureaucrat.cpp \
		main.cpp

OBJS = $(SRCS:.c=.o)

C_RED = \033[0;31m
C_GREEN = \033[1;92m
C_RESET = \033[0m
C_PURPLE = \033[0;35m
C_RED = \033[0;31m
BG_YELLOW = \x1b[43m

# SRCS := $(addprefix srcs/, $(SRCS))
# B_SRCS := $(addprefix srcs/bonus/, $(B_SRCS))

echo = /bin/echo -e

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@$(echo) "$(C_GREEN) [OK]   $(C_PURPLE) Compiling:$(C_RESET)" $(NAME)
	@$(echo) "$(C_GREEN)\tCompiled $(NAME)$(C_RESET)"
	
all : $(NAME)
	
fclean:
	@rm -f $(NAME)
	@$(echo) "$(C_RED)\tRemoved $(NAME)$(C_RESET)"
	
re: fclean all

gadd : $(SRCS)
	@git add $(SRCS) *.hpp Makefile
	@$(echo) "$(C_GREEN) SRCS added to git $(C_RESET)"

git : gadd
	@git commit -am "make commit"
	@$(echo) "$(C_PURPLE) SRCS committed $(C_RESET)"
	@git push origin master
	@$(echo) "$(C_GREEN) PUSHED $(C_RESET)" $(NAME)