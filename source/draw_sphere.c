/*
** draw_sphere.c for source in /home/admin/Documents/Programming/raytracer/source
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Wed Jul 06 20:08:15 2016 Thomas Murgia
** Last update Wed Jul 06 20:08:15 2016 Thomas Murgia
*/

#include  <my.h>
#include  <config.h>
#include  <raytracer.h>

void      draw_sphere(t_sphere *sphere)
{
  t_ray   ray;
  int     ix;
  int     iy;

  init_vector(&(ray.dir), 0, 0, 1);
  init_vector(&(ray.start), 0, 0, 0);
  iy = 0;
  while (iy < SIZE_Y)
    {
      ray.start.y = iy;
      ix = 0;
      while (ix < SIZE_X)
        {
          ray.start.x = ix;
          if (check_intersect(&ray, sphere))
            my_puts("##");
          else
            my_puts("**");
          ++ix;
        }
      my_putc(10);
      ++iy;
    }
}
