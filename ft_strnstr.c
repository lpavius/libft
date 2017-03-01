/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavius <lpavius@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:44:32 by lpavius           #+#    #+#             */
/*   Updated: 2014/04/16 15:33:48 by lpavius          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;

	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	i = 0;
	while (s1[i] && ((ft_strlen(s2) + i - 1) < n))
	{
		if (s1[i] == *s2)
		{
			if (ft_strncmp(&s1[i], s2, ft_strlen(s2)) == 0)
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
