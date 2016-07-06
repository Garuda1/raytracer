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
