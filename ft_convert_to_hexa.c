/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_to_hexa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavius <lpavius@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 18:26:51 by lpavius           #+#    #+#             */
/*   Updated: 2015/02/04 18:26:56 by lpavius          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static char	*hexa_digits(void)
{
	static char	hexa_digits[16] = "0123456789abcdef";

	return (hexa_digits);
}

static char	hexa_digit(int n)
{
	int	i;

	i = 0;
	while (hexa_digits()[i])
	{
		if (n == i)
			return (hexa_digits()[i]);
		++i;
	}
	return ('!');
}

char		*ft_dtoh(const int decimal)
{
	int		n;
	char	*hexa;
	size_t	len;
	int		i;

	n = decimal;
	len = 0;
	while (n)
	{
		n /= 16;
		len += 1;
	}
	hexa = ft_strnew(len);
	if (!hexa)
		ft_error("malloc() failed!");
	n = decimal;
	i = 0;
	while (n)
	{
		hexa[i++] = hexa_digit(n % 16);
		n /= 16;
	}
	hexa = ft_strrev(hexa);
	return (hexa);
}
