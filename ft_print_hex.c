/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:09:02 by mcallejo          #+#    #+#             */
/*   Updated: 2023/10/23 15:35:14 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static int	ft_nlen(char c, int n)
{
	int					nlen;
	long long int		ntemp;

	ntemp = (long long int)n;
	nlen = 0;
	if (n == 0)
		return (1);
	if (ntemp < 0)
	{
		ntemp = ntemp * -1;
		nlen++;
	}
	while (ntemp > 0)
	{
		ntemp = ntemp / 16;
		nlen++;
	}
	return (nlen);
}

int	ft_print_hex(int x)
{
	long int	nlong;
	int			j;

	j = 0;
	nlong = (long int)x;
	if (x < 0)
	{
		nlong = nlong * -1;
		ft_putcharcounter('-');
	}
    if (nlong >= 16)
	{
		ft_print_int(nlong / 16);
		ft_putcharcounter(nlong % 16 + '0');
		j++;
	}
    else
    {
        if (nlong <= 9)
        ft_putcharcounter(nlong + '0')
    }
	    else if (nlong < 16)
        {
            if (c == 'x')
		        ft_putcharcounter(nlong - 10 + 'a');
            else if (c == 'X')
                ft_putcharcounter(nlong - 10 + 'A');
        }
	return (ft_nlen(x));
}
