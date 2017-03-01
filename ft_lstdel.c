/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavius <lpavius@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/03 23:18:23 by lpavius           #+#    #+#             */
/*   Updated: 2014/04/16 14:10:31 by lpavius          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*current;

	list = *alst;
	while (list)
	{
		current = list;
		list = list->next;
		(*del)(current->content, current->content_size);
		free(current);
	}
	*alst = NULL;
}
