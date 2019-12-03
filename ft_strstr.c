/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 14:31:52 by azulu             #+#    #+#             */
/*   Updated: 2018/06/17 13:41:27 by azulu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*mainstr;
	char	*substr;

	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1 != '\0')
	{
		mainstr = (char *)s1;
		substr = (char *)s2;
		while (*substr != '\0' && *mainstr == *substr)
		{
			substr++;
			mainstr++;
		}
		if (*substr == '\0')
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
