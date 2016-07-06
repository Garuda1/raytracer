/*
** my_puts.c for source in /home/admin/Documents/Programming/raytracer/source
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Wed Jul 06 16:49:26 2016 Thomas Murgia
** Last update Wed Jul 06 16:49:26 2016 Thomas Murgia
*/

#include  <my.h>
#include  <sys/types.h>

ssize_t   my_puts(const char *str)
{
  ssize_t i;

  i = 0;
  while (str[i])
    my_putc(str[i++]);
  return (i);
}
