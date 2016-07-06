/*
** init_vector.c for source in /home/admin/Documents/Programming/raytracer/source
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Wed Jul 06 17:03:10 2016 Thomas Murgia
** Last update Wed Jul 06 17:03:10 2016 Thomas Murgia
*/

#include  <raytracer.h>

void      init_vector(t_vector *vector, int x, int y, int z)
{
  vector -> x = x;
  vector -> y = y;
  vector -> z = z;
}
