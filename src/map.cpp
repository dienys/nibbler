/*
** map.cpp for map in /home/bloubtek/projets/nibbler
** 
** Made by morgane ferrandis
** Login   <ferran_m@epitech.eu>
** 
** Started on  Fri Mar  7 19:23:37 2014 morgane ferrandis
** Last update Fri Mar 14 19:45:39 2014 morgane ferrandis
*/

Map::Map(int x, int y)
{
  
}

Map::~Map()
{
  
}

Map::Map(Map map)
{
  this->x = map->x;
  this->y = map->y;
}

Map	&Map::Operator=(Map map)
{
  this->x = map->x;
  this->y = map->y;
  return (*this);
}
