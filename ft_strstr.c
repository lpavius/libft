/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavius <lpavius@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:43:25 by lpavius           #+#    #+#             */
/*   Updated: 2014/04/14 20:16:09 by lpavius          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*tmp;

	i = 0;
	len = ft_strlen(s2);
	tmp = (char *)s1;
	if (!*s2)
		return (tmp);
	while (tmp[i])
	{
		j = 0;
		while (tmp[i + j] == s2[j])
		{
			j++;
			if (j == len)
				return (tmp + i);
		}
		i++;
	}
	return (NULL);
}
