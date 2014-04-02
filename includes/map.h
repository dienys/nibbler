/*
** map.h for map.h in /home/bloubtek/projets/nibbler
** 
** Made by morgane ferrandis
** Login   <bloubtek@epitech.net>
** 
** Started on  Fri Mar  7 18:53:40 2014 morgane ferrandis
** Last update Wed Apr  2 19:12:53 2014 morgane ferrandis
*/

#ifndef MAP_H_
# define MAP_H_

#include <iostream>
#include <vector>
#include "Bonus.h"
#include "snake.h"

class					Map
{
  int					xMax;
  int					yMax;
  std::vector< std::vector<int> >	map;
  Snake					snak;

  // Map(Map map);
  // Map		&Operator=(Map map);

public:

  Bonus					bon;

  Map(int x, int y);
  ~Map();
  const void				getBonus();
  void					initWall();
  const int				getXMax();
  const int				getYMax();
};

#endif /* !MAP_H_ */
