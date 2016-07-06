/*
** my.h for include in /home/admin/Documents/Programming/raytracer/include
** 
** Made by Thomas Murgia
** Login   <garuda1@protonmail.com>
** 
** Started on  Wed Jul 06 16:06:26 2016 Thomas Murgia
** Last update Wed Jul 06 16:06:26 2016 Thomas Murgia
*/

#ifndef   MY_H_
#define   MY_H_

#include  <sys/types.h>

#define   TRUE    1
#define   FALSE   0

#define   SUCCESS 0
#define   FAILURE 1

#define   STDIN   1
#define   STDOUT  1
#define   STDERR  2

#define   MATH_PI 3.14159265

ssize_t   my_putc(const char c);
ssize_t   my_puts(const char *str);

#endif    /* !MY_H_ */
