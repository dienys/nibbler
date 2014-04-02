/*
** snake.cpp for snake in /home/bloubtek/projets/nibbler/includes
** 
** Made by morgane ferrandis
** Login   <ferran_m@epitech.eu>
** 
** Started on  Fri Mar 14 17:34:31 2014 morgane ferrandis
** Last update Wed Apr  2 19:02:48 2014 morgane ferrandis
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
      this->body.push_back(block);
      ++i;
      BlockBody	block(XBASE, YBASE + i);
    }
  this->body = body;
}

Snake::~Snake()
{
  while (this->body.size() != 0)
    this->body.pop_front();
}

std::list<BlockBody>	Snake::getList()
{
  return (this->body); 
}

void	Snake::modifList(BlockBody parts)
{
  this->body.push_front(parts);
}

// class BlockBody

BlockBody::BlockBody(int x, int y)
  : x(x), y(y)
{
}

BlockBody::~BlockBody()
{
}

// BlockBody::BlockBody(BlockBody cpy)
// {
//   this->x = cpy->x;
//   this->y = cpy->y;
// }

// BlockBody	&BlockBody::Operator=(BlockBody cpy)
// {
//   this->x = cpy->x;
//   this->y = cpy->y;
//   return (*this);
// }
  
const int	BlockBody::getX()
{
  return (this->x);
}

const int	BlockBody::getY()
{
    return (this->y);
}
