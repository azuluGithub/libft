/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 14:32:30 by azulu             #+#    #+#             */
/*   Updated: 2018/06/17 17:35:18 by azulu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		index;
	int		j;
	int		i;
	char	*dst;

	if (!s)
		return (NULL);
	index = 0;
	j = ft_strlen(s) - 1;
	while (ft_isspace(s[index]))
		index++;
	dst = (char*)malloc(sizeof(*dst) * (j - index + 1));
	if (!dst)
		return (NULL);
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	i = 0;
	while (index <= j)
	{
		dst[i] = s[index];
		i++;
		index++;
	}
	dst[i] = '\0';
	return (dst);
}
