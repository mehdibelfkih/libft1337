/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:43:11 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/10/21 16:34:49 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = ft_strlen(s1);
	s2 = malloc(i * sizeof(char));
	if (!s2)
		return (NULL);
	while (i >= 0)
	{
		s2[i] = s1[i];
		i--;
	}
	return (s2);
}
