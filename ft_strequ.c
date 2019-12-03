/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 14:25:22 by azulu             #+#    #+#             */
/*   Updated: 2018/06/13 11:18:06 by azulu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int			i;
	char		*s;
	char		*str;

	i = 0;
	s = (char *)s1;
	str = (char *)s2;
	if (!s || !str)
		return (0);
	while (s[i] != '\0' || str[i] != '\0')
	{
		if (s[i] != str[i])
			return (0);
		i++;
	}
	return (1);
}
