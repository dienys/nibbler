/*
** map.h for map.h in /home/bloubtek/projets/nibbler
** 
** Made by morgane ferrandis
** Login   <bloubtek@epitech.net>
** 
** Started on  Fri Mar  7 18:53:40 2014 morgane ferrandis
** Last update Fri Mar 14 20:17:18 2014 morgane ferrandis
*/

#ifndef MAP_H_
# define MAP_H_

#include "snake.h"

class		Map
{
  int		xMax;
  int		yMax;
  Snake		snake;

  Map(Map map);
  Map		&Operator=(Map map);

public:

  explicit Map(int xMax, int yMax);
  ~Map();
  Bonus		bonus;
  const int	getXMax();
  const int	getYMax();
}

#endif /* !MAP_H_ */
