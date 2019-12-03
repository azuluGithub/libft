/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 11:23:42 by azulu             #+#    #+#             */
/*   Updated: 2018/06/13 11:32:11 by azulu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*s;
	char	*str;

	i = 0;
	s = (char *)s1;
	str = (char *)s2;
	if (!s || !str)
		return (0);
	while ((s[i] != '\0' || str[i] != '\0') && i < n)
	{
		if (s[i] != str[i])
			return (0);
		i++;
	}
	return (1);
}
