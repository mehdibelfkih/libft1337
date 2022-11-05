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
	size_t	ld;
	size_t	ls;
	size_t	j;

	j = 0;
	ls = ft_strlen(src);
	ld = ft_strlen(dst);
	if (dstsize == 0)
		return (ls);
	if (dstsize < ld)
		return (ls + dstsize);
	while (dstsize > j + ld + 1 && src[j])
	{
		dst[j + ld] = src[j];
		j++;
	}
	dst[j + ld] = '\0';
	if (dstsize > ld)
		return (ls + ld);
	return (ls + dstsize);
}
