/*
** check_intersect.c for source in /home/admin/Documents/Programming/raytracer/source
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Wed Jul 06 16:14:40 2016 Thomas Murgia
** Last update Wed Jul 06 16:14:40 2016 Thomas Murgia
*/

#include  <raytracer.h>
#include  <my.h>

int           check_intersect(t_ray *ray, t_sphere *sphere)
{
  t_vector  len;  /* Distance between the start of the ray and the sphere */
  double      A;
  double      B;
  double      C;
  double      D;    /* Discriminant */

  len = vector_sub(&(ray -> start), &(sphere -> coords));
  A = dot_product(&(ray -> dir), &(ray -> dir));
  B = (2 * dot_product(&(ray -> dir), &len));
  C = dot_product(&len, &len) - (sphere -> radius * sphere -> radius);
  D = (B * B) - (4 * A * C);
  if (D < 0)
    return (FALSE); /* No intersection */
  return (TRUE);    /* Intersection */
}
