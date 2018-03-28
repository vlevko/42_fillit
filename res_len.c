/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   res_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlevko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:12:52 by vlevko            #+#    #+#             */
/*   Updated: 2017/12/22 14:59:33 by vlevko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	res_len(int len, int min)
{
	while ((len * len) < min)
		len++;
	return (len);
}
