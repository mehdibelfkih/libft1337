/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:43:11 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/11/20 20:51:11 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		i;
	size_t		j;
	char		*s2;

	i = ft_strlen(s1);
	j = 0;
	s2 = malloc(i * sizeof(char) + 1);
	if (!s2)
		return (NULL);
	while (i >= j)
	{
		s2[j] = s1[j];
		j++;
	}
	return (s2);
}
