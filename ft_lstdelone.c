/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavius <lpavius@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/03 23:18:43 by lpavius           #+#    #+#             */
/*   Updated: 2014/04/16 14:10:10 by lpavius          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;

	if (!alst || !*alst)
		return ;
	list = *alst;
	*alst = list->next;
	(*del)(list->content, list->content_size);
	free(list);
}
