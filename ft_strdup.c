/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 14:25:01 by azulu             #+#    #+#             */
/*   Updated: 2018/06/17 16:40:01 by azulu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dst;
	char	*src;
	size_t	len;

	i = 0;
	src = (char *)s;
	len = ft_strlen(s) + 1;
	dst = (char *)malloc(len);
	if (dst == NULL)
		return (NULL);
	return (ft_strcpy(dst, src));
}
