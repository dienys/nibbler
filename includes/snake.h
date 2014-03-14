/*
** snake.h for snake in /home/bloubtek/projets/nibbler
** 
** Made by morgane ferrandis
** Login   <ferran_m@epitech.eu>
** 
** Started on  Fri Mar  7 18:53:16 2014 morgane ferrandis
** Last update Fri Mar  7 19:23:16 2014 morgane ferrandis
*/

#ifndef SNAKE_H_
# define SNAKE_H_

#include <std>

class	BlockBody
{
  int	x;
  int	y;

public:

  BlockBody(int x, int y);
  ~BlockBody();
  BlockBody(int x, int y);
  Blockbody	&Operator=(int x, int y);
  const	int	getX();
  const	int	getY();
  void		setCoord(int x, int y);
};

class	Snake
{
  std::list	body;
  
public:
  
  Snake(std::list body);
  ~Snake(std::list body);
  Snake(std::list body);
  Snake		&Operator=(std::list body);
  std::list	getList();
  void		modifList(Blockbody parts);
};

#endif /* !SNAKE_H_ */
