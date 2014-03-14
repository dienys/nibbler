/*
** snake.h for snake in /home/bloubtek/projets/nibbler
** 
** Made by morgane ferrandis
** Login   <ferran_m@epitech.eu>
** 
** Started on  Fri Mar  7 18:53:16 2014 morgane ferrandis
** Last update Fri Mar 14 19:32:18 2014 morgane ferrandis
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
};

class	Snake
{
  std::list<Blockbody>	body;

  Snake(std::list<Blockbody> body);
  Snake			&Operator=(std::list<Blockbody> body);
  
public:
  
  Snake(std::list<Blockbody> body);
  ~Snake(std::list<Blockbody> body);
  std::list<Blockbody>	getList();
  void			modifList(Blockbody parts);
};

#endif /* !SNAKE_H_ */
