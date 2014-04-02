/*
** Bonus.h for Bonus in /home/bloubtek/projets/nibbler/includes
** 
** Made by morgane ferrandis
** Login   <ferran_m@epitech.eu>
** 
** Started on  Fri Mar 14 19:52:23 2014 morgane ferrandis
** Last update Wed Apr  2 14:46:40 2014 morgane ferrandis
*/

#ifndef BONUS_H_
# define BONUS_H_

class	Bonus
{
  int	x;
  int	y;
  int	score;

  // Bonus(const Bonus &);
  // Bonus		&Operator=(Bonus &bonus);

public:

  Bonus(int x, int y, int score);
  ~Bonus();
  const int	getX();
  const int	getY();
  const int	getScore();
};

#endif /* !BONUS_H_ */
