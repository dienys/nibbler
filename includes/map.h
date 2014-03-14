/*
** map.h for map.h in /home/bloubtek/projets/nibbler
** 
** Made by morgane ferrandis
** Login   <bloubtek@epitech.net>
** 
** Started on  Fri Mar  7 18:53:40 2014 morgane ferrandis
** Last update Fri Mar 14 14:54:48 2014 morgane ferrandis
*/

#ifndef MAP_H_
# define MAP_H_

#include "snake.h"

class		Map
{
  int		xMax;
  int		yMax;
  Snake		snake;

public:

  explicit Map(int, int);
  ~Map();
  Map(int x, int y);
  Map		&Operator=(int x, int y);
  // Bonus		bonus;
}

#endif /* !MAP_H_ */
