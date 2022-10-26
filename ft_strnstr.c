/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 07:54:31 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/10/26 12:42:44 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)(haystack));
	if (len == 0 )
		return (NULL);
	while (haystack[i] && len)
	{
		if (needle[j] == haystack[i])
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i - j);
		if (needle[j] != haystack[i])
		{
			i = i - j + 1 ;
			j = 0;
		}
		len --;
	}
	return (NULL);
}
