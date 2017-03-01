/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavius <lpavius@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 23:29:53 by lpavius           #+#    #+#             */
/*   Updated: 2014/04/16 18:10:11 by lpavius          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	size_t	size;
	char	*nbr;

	size = ft_intlen(n);
	nbr = (char *)ft_memalloc(sizeof(char) * size + 1);
	if (!nbr)
		return (NULL);
	nbr[0] = '0';
	nbr[size--] = '\0';
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n)
	{
		if (n < 0)
		{
			nbr[0] = '-';
			n *= -1;
		}
		while (n != 0)
		{
			nbr[size--] = n % 10 + '0';
			n /= 10;
		}
	}
	return (nbr);
}
