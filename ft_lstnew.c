/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavius <lpavius@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/03 23:19:51 by lpavius           #+#    #+#             */
/*   Updated: 2014/04/16 18:06:14 by lpavius          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*link;

	link = malloc(sizeof(t_list));
	if (link)
	{
		if (content == NULL)
		{
			link->content = NULL;
			link->content_size = 0;
		}
		else
		{
			link->content = malloc(content_size);
			link->content = ft_memcpy(link->content, content, content_size);
			link->content_size = content_size;
		}
		link->next = NULL;
	}
	return (link);
}
