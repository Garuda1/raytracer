##
## Makefile for raytracer in /home/admin/Documents/Programming/raytracer
## 
## Made by Thomas Murgia
## Login   <garuda1@protonmail.com>
## 
## Started on  Wed Jul 06 16:32:53 2016 Thomas Murgia
## Last update Wed Jul 06 16:32:53 2016 Thomas Murgia
##

CC			= gcc
RM			= rm -f
NAME		= raytracer
SRCS		= source/raytracer.c \
					source/args.c \
					source/dot_product.c \
					source/draw_sphere.c \
					source/vector_sub.c \
					source/check_intersect.c \
					source/init_vector.c \
					source/init_sphere.c \
					source/my_putc.c \
					source/my_puts.c
OBJS		= $(SRCS:.c=.o)
CFLAGS	= -Wall \
					-Wextra \
					-Werror \
					-ansi \
					-pedantic \
					-std=c89 \
					-g3 \
					-O2 \
					-I./include

all			: $(NAME)

$(NAME)	: $(OBJS)
					$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean		:
					$(RM) $(OBJS)

fclean	: clean
					$(RM) $(NAME)

re			: fclean all

.PHONY	: all clean fclean re
