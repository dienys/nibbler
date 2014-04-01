/*
** bonus.cpp for bonus in /home/bloubtek/projets/nibbler/includes
** 
** Made by morgane ferrandis
** Login   <ferran_m@epitech.eu>
** 
** Started on  Fri Mar 14 20:13:05 2014 morgane ferrandis
** Last update Tue Apr  1 18:15:32 2014 morgane ferrandis
*/

Bonus::Bonus(int x, int y, int score)
{
  this->x = x;
  this->y = y;
  this->score = score;
}

Bonus::~Bonus()
{
}

int	getX()
{
  return (this->x);
}

int	getY()
{
  return (this->y);
}

int	getScore()
{
  return (this->score);
}
