/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavius <lpavius@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/24 19:35:16 by lpavius           #+#    #+#             */
/*   Updated: 2014/09/24 19:36:23 by lpavius          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

static void	ft_return(char **line, char **save)
{
	size_t	len;
	char	*tmp;

	len = ft_strchr(*save, '\n') - *save;
	*line = ft_strsub(*save, 0, len);
	tmp = *save;
	*save = ft_strsub(tmp, len + 1, ft_strlen(tmp) - len - 1);
	free(tmp);
}

int			get_next_line(int const fd, char **line)
{
	char		buff[BUFF_SIZE + 1];
	int			ret;
	static char	*save;

	if (fd == -1 || BUFF_SIZE <= 0)
		return (-1);
	if (save == NULL)
		save = ft_strnew(BUFF_SIZE + 1);
	while (save != NULL && ft_strchr(save, '\n') == NULL \
		&& ((ret = read(fd, buff, BUFF_SIZE)) > 0))
	{
		buff[ret] = '\0';
		save = ft_strjoin(save, buff);
	}
	if (ret == -1 || save == NULL)
		return (-1);
	if (ret == 0 && ft_strchr(save, '\n') == NULL)
	{
		*line = ft_strdup(save);
		return (0);
	}
	ft_return(line, &(save));
	return (1);
}
