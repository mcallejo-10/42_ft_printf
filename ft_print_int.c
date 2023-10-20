/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:48:21 by mcallejo          #+#    #+#             */
/*   Updated: 2023/10/20 22:07:51 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"
static int	ft_nlen(int n)
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
		ntemp = ntemp / 10;
		nlen++;
	}
	return (nlen);
}
int	ft_print_int(int di)
{
	long int	nlong;
	int			j;

	j = 0;
	nlong = (long int)di;
	if (di< 0)
	{
		nlong = nlong * -1;
		ft_putcharcounter('-');
	}
	if (nlong > 9)
	{
		ft_print_int(nlong / 10);
		ft_putcharcounter(nlong % 10 + '0');
		j++;
	}
	else if (nlong < 10)
		ft_putcharcounter(nlong + '0');
	return (ft_nlen(di));
}
