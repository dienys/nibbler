/*
** map.h for map.h in /home/bloubtek/projets/nibbler
** 
** Made by morgane ferrandis
** Login   <bloubtek@epitech.net>
** 
** Started on  Fri Mar  7 18:53:40 2014 morgane ferrandis
** Last update Tue Apr  1 17:30:16 2014 morgane ferrandis
*/

#ifndef MAP_H_
# define MAP_H_

#include "snake.h"

std::vector<int>	Line;
std::vector<Line>	Grid;

class		Map
{
  int		xMax;
  int		yMax;
  Grid		map;
  Snake		snake;

  Map(Map map);
  Map		&Operator=(Map map);

public:

  explicit Map(int x, int y);
  ~Map();
  Bonus		bonus;
  void		initWall();
  const int	getXMax();
  const int	getYMax();
}

#endif /* !MAP_H_ */
