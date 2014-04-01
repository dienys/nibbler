/*
** snake.cpp for snake in /home/bloubtek/projets/nibbler/includes
** 
** Made by morgane ferrandis
** Login   <ferran_m@epitech.eu>
** 
** Started on  Fri Mar 14 17:34:31 2014 morgane ferrandis
** Last update Tue Apr  1 18:23:04 2014 morgane ferrandis
*/

#include "../includes/snake.h"

// class Snake

Snake::Snake()
{
  std::list<BlockBody>	body;
  BlockBody		block(XBASE, YBASE);
  int			i;

  i = 0;
  while (i < 4)
    {
      body.push_front(block);
      ++i;
      BlockBody	block(XBASE, YBASE - i);
    }
}

~Snake::Snake(std::list<BlockBody> body)
{
  while (body.size != 0)
    body.pop_front();
}

std::list<BlockBody>	getList()
{
  return (this->body); 
}

void	modifList(BlockBody parts)
{
  this->body.push_front(parts);
}

// class BlockBody

BlockBody::BlockBody(int x, int y)
  : x(x), y(y)
{
}

~BlockBody::BlockBody(int x, int y)
{
}

BlockBody::BlockBody(BlockBody cpy)
{
  this->x = cpy->x;
  this->y = cpy->y;
}

BlockBody	&BlockBody::Operator=(BlockBody cpy)
{
  this->x = cpy->x;
  this->y = cpy->y;
  return (*this);
}
  
const int	getX()
{
  return (this->x);
}

const int	getY()
{
    return (this->y);
}
