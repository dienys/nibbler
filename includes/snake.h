/*
** snake.h for snake in /home/bloubtek/projets/nibbler
** 
** Made by morgane ferrandis
** Login   <ferran_m@epitech.eu>
** 
** Started on  Fri Mar  7 18:53:16 2014 morgane ferrandis
** Last update Tue Apr  1 18:18:27 2014 morgane ferrandis
*/

#ifndef SNAKE_H_
# define SNAKE_H_

#include <iostream>

# define XBASE 500
# define YBASE 600

enum	map
  {
    VOID,
    SNAKE,
    HEAD,
    WALL
  }

class	BlockBody
{
  int	x;
  int	y;

  Blockbody	&Operator=(Blockbody block);
  BlockBody(BlockBody block);

public:

  BlockBody(int x, int y);
  ~BlockBody();
  const	int	getX();
  const	int	getY();
};

class	Snake
{
  std::list<Blockbody>	body;

  Snake(Snake snake);
  Snake			&Operator=(Snake snake);
  
public:
  
  Snake(std::list<Blockbody> body);
  ~Snake(std::list<Blockbody> body);
  std::list<Blockbody>	getList();
  void			addBlock(Blockbody parts);
};

#endif /* !SNAKE_H_ */
