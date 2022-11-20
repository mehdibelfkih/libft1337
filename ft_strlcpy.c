/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 09:03:47 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/11/20 20:51:16 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(src);
	if (dstsize == 0)
		return (i);
	while (dstsize > 1 && src[j])
	{
		dst[j] = src[j];
		j++;
		dstsize--;
	}
	dst[j] = '\0';
	return (i);
}
