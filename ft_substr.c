/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:03:59 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/10/21 19:11:05 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*s1;

	i = ft_strlen(s);
	j = 0;
	if (i < start )
	{
		s1 = ft_calloc(1,1);
		return (s1);
	}
	else if (i > start + len)
	{
		s1 = malloc(len);
		s1[len + 1] = '\0';
	}
	else
	{
	s1 = malloc(i - start);
		 s1[i - start] = '\0';
	}
	while (len > 0 || s[start])
	{
		s1[j] = s[start];
		start++;
		j++;
		len--;
	}
	return (s1);
}
