/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlevko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:03:24 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/18 20:35:28 by vlevko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	dot_free(int ***dot, int count)
{
	while (count-- > 0)
		free((*dot)[count]);
	free(*dot);
	*dot = NULL;
	return (1);
}
