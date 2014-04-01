/*
** ISnake.h for ISnake in /home/bloubtek/projets/nibbler/includes
** 
** Made by morgane ferrandis
** Login   <ferran_m@epitech.eu>
** 
** Started on  Wed Mar 19 17:32:14 2014 morgane ferrandis
** Last update Tue Apr  1 17:26:52 2014 morgane ferrandis
*/

#ifndef ISNAKE_H_
# define ISNAKE_H_

class	IMov
{

protected:

  virtual void	mvr();
  virtual void	mvl();

}

class	IGraph
{

protected:

  virtual void	aff_snake();
  virtual void	aff_bonus();
  virtual Key	getEvent();
}

#endif /* !ISNAKE_H_ */
