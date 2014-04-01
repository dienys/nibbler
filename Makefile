##
## Makefile for Makefile in /home/bloubtek/projets/nibbler
## 
## Made by morgane ferrandis
## Login   <bloubtek@epitech.net>
## 
## Started on  Fri Mar 14 14:26:23 2014 morgane ferrandis
## Last update Tue Apr  1 18:14:33 2014 morgane ferrandis
##

NAME		= nibbler

SRC		= /src/map.cpp \
		  /src/main.cpp \
		  /src/snake.cpp \
		  /src/game.cpp

CFLAGS		= -W -Wall -Wextra

OBJ		= $(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		g++ -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re