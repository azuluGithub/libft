/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 11:39:39 by azulu             #+#    #+#             */
/*   Updated: 2018/06/23 16:38:48 by azulu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char			*str;
	int				length;
	unsigned int	tmp;

	tmp = n;
	length = 0;
	if (n < 0)
	{
		tmp = -n;
		length++;
	}
	length = length + 1;
	while (n /= 10)
		length++;
	str = ft_strnew(length);
	if (str)
	{
		str[--length] = tmp % 10 + '0';
		while (tmp /= 10)
			str[--length] = tmp % 10 + '0';
		if (length == 1)
			str[0] = '-';
		return (str);
	}
	return (NULL);
}
