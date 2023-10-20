/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:54:39 by mcallejo          #+#    #+#             */
/*   Updated: 2023/10/20 22:07:52 by mcallejo         ###   ########.fr       */
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
int	ft_print_unsigned(unsigned int u)
{
	int			j;

	j = 0;
	if (u > 9)
	{
		ft_print_unsigned(u / 10);
		ft_putcharcounter(u % 10 + '0');
		j++;
	}
	else if (u < 10)
		ft_putcharcounter(u + '0');
	return (ft_nlen(u));
}
