/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavius <lpavius@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/24 19:48:17 by lpavius           #+#    #+#             */
/*   Updated: 2014/09/24 19:48:24 by lpavius          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	str = NULL;
	if (s)
	{
		str = (char *)ft_memalloc(len + 1);
		if (str == NULL)
			return (NULL);
		i = 0;
		while (i < len)
		{
			str[i] = s[start + i];
			i++;
		}
	}
	return (str);
}
