/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabahi <drabahi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:46:24 by drabahi           #+#    #+#             */
/*   Updated: 2013/12/01 22:25:43 by drabahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char str1;
	unsigned char str2;

	str1 = *s1;
	str2 = *s2;
	if (!n)
		return (0);
	else if (!str1 && !str2)
		return (0);
	else if (str1 != str2)
		return (str1 - str2);
	return (ft_strncmp(++s1, ++s2, --n));
}
