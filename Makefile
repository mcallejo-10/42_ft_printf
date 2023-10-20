# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcallejo <mcallejo@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 18:21:28 by mcallejo          #+#    #+#              #
#    Updated: 2023/10/20 21:58:53 by mcallejo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libprintf.a

SOURCES = ft_printf.c ft_printstr.c ft_putcharcounter.c ft_print_int.c \
	ft_print_unsigned.c

INCLUDE = libprintft.h

#crea los archivos .o
OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Werror -Wextra 

#objetivo para hacer doc de la libreria
all: $(NAME)

CC = gcc

#compila los .c
%.o: %.c Makefile libprintf.h
	$(CC) -c $(CFLAGS) -I ./ -c $< -o $@ 

#crea el archivo de la librería
$(NAME): $(OBJECTS)
	$(AR) -r $@ $? 

clean:
	rm -f $(OBJECTS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
