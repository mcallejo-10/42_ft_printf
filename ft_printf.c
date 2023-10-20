/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:41:37 by mcallejo          #+#    #+#             */
/*   Updated: 2023/10/20 23:00:53 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"
#include <stdarg.h>
#include <stdio.h>

static int	ft_eval_format(int count, va_list arglist, char c)
{
	if (c == 'c')
		count = count + ft_putcharcounter(va_arg(arglist, int));
	//printf("en c es %d\n", count);	
	if (c == 's')
		count = ft_printstr(count, va_arg(arglist, char *));
	//printf("despues de s es %d\n", count);
	//if (c == 'p')
	if (c == 'd' || c == 'i')
		count += ft_print_int(va_arg(arglist, int));
	if (c == 'u')
		count += ft_print_unsigned(va_arg(arglist, unsigned int));
	/*if (c == 'x')
	if (c == 'X')*/
	if (c == '%')
		count += ft_putcharcounter(va_arg(arglist, int));
	//printf("antes del return %d\n", count);
	return (count);
}

int	ft_printf(char const *format, ...)
{
	va_list		arglist;
	int			i;
	int			count;

	va_start(arglist, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			//eval what function is needed
			count = ft_eval_format(count, arglist,format[i]);
			i++;
		}
		else
		{
			count = count + ft_putcharcounter(format[i]);
			i++;
			//printf("%d\n", count);
		}
	}
	//printf("antes del return2 %d\n", count);
	return (count);
}

int	main(void)
{
	char			c = 'm';
	char			*s = "mira";
	int				i = -10;
	unsigned int	u = 768;
	int				ret;
	int				ret2;

	ret = ft_printf("Mi char es: %c\nMi str es: %s\nMi d: %d\nMi i: %i\nMi u: %u\n", c, s, i, i, u);
	ret2 = printf("Su char es: %c\nSu str es: %s\nSu d: %d\nSu i: %i\nSu u: %u\nSu h: %X\n", c, s, i, i, u, i);
	printf("el retorno de la función es: %d\nEl retorno de la función original es: %d\n", ret, ret2);
	return (0);
}
