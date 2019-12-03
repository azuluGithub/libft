/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 14:23:03 by azulu             #+#    #+#             */
/*   Updated: 2018/06/12 06:51:11 by azulu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		n;
	char	value;
	char	*str;

	i = 0;
	value = (char)c;
	str = (char *)s;
	n = (int)ft_strlen(s) + 1;
	while (i < n)
	{
		if (str[i] == value)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
