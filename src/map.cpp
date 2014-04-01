/*
** map.cpp for map in /home/bloubtek/projets/nibbler
** 
** Made by morgane ferrandis
** Login   <ferran_m@epitech.eu>
** 
** Started on  Fri Mar  7 19:23:37 2014 morgane ferrandis
** Last update Tue Apr  1 18:20:48 2014 morgane ferrandis
*/

#include <iostream>
#include "../includes/map.h"
#include "../includes/snake.h"

#define	XSNAKE snake.body.x
#define	YSNAKE snake.body.y

Map::Map(int x, int y)
{
  std::list<BlockBody>::iterator	it;
  Line		line(x, VOID);
  Grid		map(y, line);
  Snake		snake();

  it = snake.body.begin();
  this->snake = snake;
  while (it != snake.body.end())
    {
      if (it == snake.body.end())
	map[XSNAKE][YSNAKE] = HEAD;
      map[XSNAKE][YSNAKE] = SNAKE;
      ++it;
    }
  this->map = map;
  this->xMax = x;
  this->yMax = y;
}

Map::~Map()
{
  this->snake.~Snake();
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
