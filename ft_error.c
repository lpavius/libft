/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavius <lpavius@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 18:29:37 by lpavius           #+#    #+#             */
/*   Updated: 2015/02/04 18:29:52 by lpavius          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_error(const char *msg)
{
	ft_putendl_fd(msg, STDERR);
	exit(EXIT_FAILURE);
}
