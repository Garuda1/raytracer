/*
** raytracer.c for source in /home/admin/Documents/Programming/raytracer/source
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Wed Jul 06 16:07:28 2016 Thomas Murgia
** Last update Wed Jul 06 16:07:28 2016 Thomas Murgia
*/

#include    <my.h>
#include    <args.h>
#include    <raytracer.h>

void        draw_sphere(t_sphere *sphere)
{
  t_ray     ray;
  int       ix;
  int       iy;

  init_vector(&(ray.dir), 0, 0, 1);
  init_vector(&(ray.start), 0, 0, 0);
  iy = 0;
  while (iy < SIZE_Y)
    {
      ray.start.y = iy;
      ix =0;
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

static
void        load_coords(t_args *args, t_sphere *sphere)
{
  sphere -> coords = args -> sphere_coords;
  sphere -> radius = args -> radius;
}

int         main(int argc, char **argv)
{
  t_args    args;
  t_sphere  sphere;

  init_args(&args);
  parse_args(&args, argc, argv);
  load_coords(&args, &sphere);
  draw_sphere(&sphere);
  return (SUCCESS);
}
