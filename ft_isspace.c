/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 10:34:46 by azulu             #+#    #+#             */
/*   Updated: 2018/06/23 16:31:40 by azulu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	unsigned char	space;

	space = (unsigned char)c;
	if (space == '\t' || space == '\n' || space == '\v' ||
			space == '\f' || space == '\r' || space == ' ')
		return (1);
	return (0);
}
