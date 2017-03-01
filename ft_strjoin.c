/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavius <lpavius@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/24 19:45:30 by lpavius           #+#    #+#             */
/*   Updated: 2014/09/24 19:45:40 by lpavius          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*r;

	if (!s1 || !s2)
		return (NULL);
	r = (char *)ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!r)
		return (NULL);
	if (s1 && s2)
	{
		ft_strcpy(r, s1);
		ft_strcat(r, s2);
	}
	return (r);
}
