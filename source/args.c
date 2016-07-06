/*
** args.c for source in /home/admin/Documents/Programming/raytracer/source
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Wed Jul 06 17:13:42 2016 Thomas Murgia
** Last update Wed Jul 06 17:13:42 2016 Thomas Murgia
*/

#include    <config.h>
#include    <string.h>
#include    <stdlib.h>
#include    <args.h>
#include    <my.h>

void        init_args(t_args *args)
{
  t_vector  coords;

  init_vector(&coords, DEFAULT_X, DEFAULT_Y, DEFAULT_Z);
  args -> sphere_coords = coords;
  args -> radius = DEFAULT_RADIUS;
}

void        parse_args(t_args *args, int argc, char **argv)
{
  int       i;

  i = 1;
  while (i < argc)
    {
      if (!strcmp(argv[i], "--coords") && ((i + 3) < argc))
        {
          args -> sphere_coords.x = atoi(argv[++i]);
          args -> sphere_coords.y = atoi(argv[++i]);
          args -> sphere_coords.z = atoi(argv[++i]);
        }
      else if (!strcmp(argv[i], "--radius") && ((i + 1) < argc))
          args -> radius = atoi(argv[++i]);
      else
        {
          my_puts("Syntax: raytracer [--coords x y z] [--radius r]\n");
          exit(FAILURE);
        }
      ++i;
    }
}
