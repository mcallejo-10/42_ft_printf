/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:25:11 by mcallejo          #+#    #+#             */
/*   Updated: 2023/10/20 21:57:18 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(char const *, ...);
int	ft_printstr(int, char *);
int	ft_putcharcounter(char);
int ft_print_int(int);
int ft_print_unsigned(unsigned int);

#endif