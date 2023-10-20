/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:27:22 by mcallejo          #+#    #+#             */
/*   Updated: 2023/10/20 19:31:57 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_printstr(int count, char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		count = count + (ft_putcharcounter(s[i]));
		i++;
	}
	return (count);
}

