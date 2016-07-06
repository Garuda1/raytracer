/*
** vector_sub.c for source in /home/admin/Documents/Programming/raytracer/source
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Wed Jul 06 16:26:43 2016 Thomas Murgia
** Last update Wed Jul 06 16:26:43 2016 Thomas Murgia
*/

#include      <raytracer.h>

t_vector    vector_sub(t_vector *a, t_vector *b)
{
  t_vector  res;

  res.x = ((a -> x) - (b -> x));
  res.y = ((a -> y) - (b -> y));
  res.z = ((a -> z) - (b -> z));
  return (res);
}
