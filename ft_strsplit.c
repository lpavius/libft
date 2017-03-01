/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavius <lpavius@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/03 23:14:49 by lpavius           #+#    #+#             */
/*   Updated: 2014/04/16 14:10:59 by lpavius          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_initialize_split(char const *s, char **p, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		++i;
	*p = ft_strnew(i);
	return (i);
}

static void		ft_fill_split(char const *s, char **t, char c)
{
	int		n;
	int		len;
	int		i;

	n = 0;
	i = 0;
	while (s[i] && s[i] == c)
		++i;
	while (s[i])
	{
		len = ft_initialize_split(s + i, &t[n], c);
		if (t[n])
			ft_strncpy(t[n], s + i, len);
		++n;
		i += len;
		while (s[i] && s[i] == c)
			++i;
	}
	t[n] = NULL;
}

static int		ft_split_count(char const *s, char c)
{
	int		n;
	int		i;

	n = 0;
	i = 0;
	while (s[i] && s[i] == c)
		++i;
	while (s[i])
	{
		++n;
		while (s[i] && s[i] != c)
			++i;
		while (s[i] && s[i] == c)
			++i;
	}
	return (n);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		n;

	if (!s)
		return (NULL);
	n = ft_split_count(s, c);
	t = (char **)malloc((n + 1) * sizeof(*t));
	if (t)
		ft_fill_split(s, t, c);
	return (t);
}
