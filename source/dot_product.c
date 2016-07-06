/*
** dot_product.c for source in /home/admin/Documents/Programming/raytracer/source
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Wed Jul 06 16:24:47 2016 Thomas Murgia
** Last update Wed Jul 06 16:24:47 2016 Thomas Murgia
*/

#include  <raytracer.h>

double    dot_product(t_vector *v1, t_vector *v2)
{
  /* A.B = (Xa * Xb) + (Ya * Yb) */
  return (((v1->x)*(v2->x)) + ((v1->y)*(v2->y)) + ((v1->z)*(v2->z)));
}
