# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/15 17:33:13 by nadesjar          #+#    #+#              #
#    Updated: 2022/07/16 11:02:04 by nadesjar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIGHT_GREEN		= $(shell tput -Txterm setaf 2)
LILAS			= $(shell tput -Txterm setaf 5)
RESET			= "\033[0m"

PATH_OBJS 		= ./objs/
PATH_SRC		= ./src/

FILES			= $(PATH_SRC)Megaphone.cpp \

OBJS			= $(patsubst $(PATH_SRC)%.c, $(PATH_OBJS)%.o, $(FILES))

CC				= c++

CFLAGS			= -Wall -Werror -Wextra -std=c++98

NAME			= Megaphone

all: $(NAME)

$(NAME): $(OBJS)
	@echo $(LILAS)"COMPILATION DE Megaphone EN COURS..."$(RESET)
	$(CC) $(OBJS) $(CFLAGS) -o Magaphone
	@echo $(LILAS)"Megaphone READY !!!"$(RESET)


$(PATH_OBJS)%.o:	$(PATH_SRC)%.c
	@mkdir -p $(PATH_OBJS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:	
	@rm -f $(OBJ)

fclean: clean
	@echo $(LIGHT_GREEN) BYE BYE !!! $(LIGHT_GREEN)
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
