/*
** snake.h for snake in /home/bloubtek/projets/nibbler
** 
** Made by morgane ferrandis
** Login   <ferran_m@epitech.eu>
** 
** Started on  Fri Mar  7 18:53:16 2014 morgane ferrandis
** Last update Wed Apr  2 18:54:40 2014 morgane ferrandis
*/

#ifndef SNAKE_H_
# define SNAKE_H_

#include <iostream>
#include <list>
#include "../includes/map.h"

# define XBASE 500
# define YBASE 600

enum	cnf
  {
    VOID,
    SNAKE,
    HEAD,
    WALL
  };

class	BlockBody
{
  int	x;
  int	y;

  // BlockBody	&Operator=(BlockBody block);
  // BlockBody(BlockBody block);

public:

  BlockBody(int x, int y);
  ~BlockBody();
  const	int	getX();
  const	int	getY();
};

class	Snake
{
  std::list<BlockBody>	body;

  // Snake(const Snake &snake);
  // Snake			&Operator=(const Snake &snake);
  
public:
  
  Snake();
  ~Snake();
  std::list<BlockBody>	getList();
  void			addBlock(BlockBody parts);
  void			modifList(BlockBody parts);
};

#endif /* !SNAKE_H_ */
