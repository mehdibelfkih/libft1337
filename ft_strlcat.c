/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:33:24 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/10/27 21:19:08 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i1;
	size_t	i2;
	size_t	j;

	j = 0;
	i1 = ft_strlen(src);
	i2 = ft_strlen(dst);
	if (dstsize == 0)
		return (i1);
	while (dstsize > j + i2 + 1 && src[j])
	{
		dst[j + i2] = src[j];
		j++;
	}
	dst[j + i2] = '\0';
	if (dstsize > i2)
		return (i1 + i2);
	return (i1 + dstsize);
}
