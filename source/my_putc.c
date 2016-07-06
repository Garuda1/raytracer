/*
** my_putc.c for source in /home/admin/Documents/Programming/raytracer/source
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Wed Jul 06 16:47:50 2016 Thomas Murgia
** Last update Wed Jul 06 16:47:50 2016 Thomas Murgia
*/

#include  <my.h>
#include  <unistd.h>
#include  <sys/types.h>

ssize_t   my_putc(const char c)
{
  return (write(STDOUT, &c, 1));
}
