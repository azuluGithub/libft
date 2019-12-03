/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 13:20:37 by azulu             #+#    #+#             */
/*   Updated: 2018/06/17 14:10:37 by azulu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*str1;

	str1 = (char *)s1;
	if (*s2 == '\0')
		return (str1);
	j = 0;
	while (s1[j])
	{
		i = 0;
		while (s1[j + i] == s2[i] && j + i < n && s2[i] != '\0')
			i++;
		if (s2[i] == '\0')
			return (&str1[j]);
		j++;
	}
	return (0);
}
