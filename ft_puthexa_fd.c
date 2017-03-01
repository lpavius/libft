/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smicaliz <smicaliz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/30 16:35:29 by smicaliz          #+#    #+#             */
/*   Updated: 2014/06/03 18:43:40 by smicaliz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void	ft_puthexa_fd(int fd, char *s)
{
	char	*tmp;

	while (*s)
	{
		tmp = ft_dtoh(*s);
		write(fd, tmp, ft_strlen(tmp));
		free(tmp);
		++s;
	}
}
