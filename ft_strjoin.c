/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:47:20 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/10/22 13:23:52 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*s;

	i = 0;
	j = ft_strlen(s1) + ft_strlen(s2) - 1;
	s = malloc(j);
	if (!s)
		return (NULL);
	while (s1)
	{
		s[i] = s1[i];
		i++;
	}
	while (s2)
	{
		s[i] = s2[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
