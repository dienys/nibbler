##
## Makefile for Makefile in /home/bloubtek/projets/nibbler
## 
## Made by morgane ferrandis
## Login   <bloubtek@epitech.net>
## 
## Started on  Fri Mar 14 14:26:23 2014 morgane ferrandis
## Last update Tue Apr  1 18:54:37 2014 morgane ferrandis
##

NAME		= nibbler

SRC		= /src/map.cpp
		  /src/snake.cpp
		  /src/game.cpp
		  /src/main.cpp

OBJ		= $(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		rm -f $(NAME)