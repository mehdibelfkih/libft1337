/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:34:36 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/11/03 05:32:49 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wkl(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
			return (i);
		i++;
	}
	return (-1);
}

int	wkt(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
			return (i);
		i--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	if (wkl(s1, set) == -1)
		return (ft_strdup(""));
	return (ft_substr(s1, wkl(s1, set), wkt(s1, set) - wkl(s1, set) + 1));
}
