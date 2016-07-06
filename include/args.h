/*
** args.h for include in /home/admin/Documents/Programming/raytracer/include
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Wed Jul 06 17:11:54 2016 Thomas Murgia
** Last update Wed Jul 06 17:11:54 2016 Thomas Murgia
*/

#ifndef     ARGS_H_
#define     ARGS_H_

#include    <raytracer.h>

typedef struct s_args t_args;
struct      s_args
{
  t_vector  sphere_coords;
  double    radius;
};

void        init_args(t_args *args);
void        parse_args(t_args *args, int argc, char **argv);

#endif      /* !ARGS_H_ */
