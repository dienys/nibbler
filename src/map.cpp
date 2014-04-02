/*
** map.cpp for map in /home/bloubtek/projets/nibbler
** 
** Made by morgane ferrandis
** Login   <ferran_m@epitech.eu>
** 
** Started on  Fri Mar  7 19:23:37 2014 morgane ferrandis
** Last update Wed Apr  2 19:22:02 2014 morgane ferrandis
*/

#include <iostream>
#include <vector>
#include <iterator>
#include "../includes/snake.h"

Map::Map(int x, int y)
{
  std::list<BlockBody>::iterator	it;
  std::vector<int>			line(0, y);
  std::vector<line>			map(line, x);
  Snake					snak;
  std::list<BlockBody>			list;
  Map					mymap;

  list = snak.getList();
  it = list.begin();
  while (it != list.end())
    {
      if (it == list.begin())
	map[list.x][list.y] = HEAD;
      map[list.x][list.y] = SNAKE;
      ++it;
    }

  this->snak = snak;
  this->map = map;
  this->xMax = x;
  this->yMax = y;
}

Map::~Map()
{

}

// Map::Map(Map map)
// {
//   this->x = map->x;
//   this->y = map->y;
// }

// Map	&Map::Operator=(Map map)
// {
//   this->x = map->x;
//   this->y = map->y;
//   return (*this);
// }

const int	Map::getXMax()
{
  return (this->xMax);
}

const int	Map::getYMax()
{
  return (this->yMax);
}
