/*
** raytracer.h for include in /home/admin/Documents/Programming/raytracer/include
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Wed Jul 06 16:09:12 2016 Thomas Murgia
** Last update Wed Jul 06 16:09:12 2016 Thomas Murgia
*/

#ifndef     RAYTRACER_H_
#define     RAYTRACER_H_

typedef struct s_vector t_vector;
struct      s_vector
{
  double    x;
  double    y;
  double    z;
};

typedef struct s_sphere t_sphere;
struct      s_sphere
{
  t_vector  coords;
  double    radius;
};

typedef struct s_ray t_ray;
struct        s_ray
{
  t_vector  start;
  t_vector  dir;
};

void        init_vector(t_vector *vector, int x, int y, int z);
void        init_sphere(t_sphere *sphere, t_vector *coords, double radius);
void        init_ray(t_vector *start, t_vector *dir);

void        draw_sphere(t_sphere *sphere);
t_vector    vector_sub(t_vector *v1, t_vector *v2);
double      dot_product(t_vector *v1, t_vector *v2);
int         check_intersect(t_ray *ray, t_sphere *sphere);

#endif    /* !RAYTRACER_H_ */
