/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavius <lpavius@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 18:11:05 by lpavius           #+#    #+#             */
/*   Updated: 2015/02/04 18:12:54 by lpavius          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_exit(int test, char *err_msg)
{
	if (!test)
		return ;
	else
	{
		ft_putendl_fd(err_msg, 2);
		exit(1);
	}
}
