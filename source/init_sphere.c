/*
** init_sphere.c for source in /home/admin/Documents/Programming/raytracer/source
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Wed Jul 06 17:04:23 2016 Thomas Murgia
** Last update Wed Jul 06 17:04:23 2016 Thomas Murgia
*/

#include  <raytracer.h>

void      init_sphere(t_sphere *sphere, t_vector *coords, double radius)
{
  sphere -> coords = *coords;
  sphere -> radius = radius;
}
