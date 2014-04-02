/*
** bonus.cpp for bonus in /home/bloubtek/projets/nibbler/includes
** 
** Made by morgane ferrandis
** Login   <ferran_m@epitech.eu>
** 
** Started on  Fri Mar 14 20:13:05 2014 morgane ferrandis
** Last update Tue Apr  1 18:50:33 2014 morgane ferrandis
*/

#include "../includes/Bonus.h"

Bonus::Bonus(int x, int y, int score)
{
  this->x = x;
  this->y = y;
  this->score = score;
}

Bonus::~Bonus()
{
}

const int	Bonus::getX()
{
  return (this->x);
}

const int	Bonus::getY()
{
  return (this->y);
}

const int	Bonus::getScore()
{
  return (this->score);
}
