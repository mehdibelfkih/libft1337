/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:34:36 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/10/25 13:47:44 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wkl(char const *s1, char const *set)
{
	int	i;

	i = 0;
	if (ft_strnstr(s1, set, ft_strlen(set)))
		i = ft_strlen(set);
	return (i);
}

int	wkt(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1);
	if (ft_strnstr(s1 + (ft_strlen(s1) - ft_strlen(set)), set, ft_strlen(s1)))
		i = i - ft_strlen(set);
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;

	if (s1 == NULL || set == NULL)
		return (NULL);
	s = malloc(wkt(s1, set) - wkl(s1, set));
	if (!s)
		return (NULL);
	s = ft_substr(s1, wkl(s1, set), wkt(s1, set) - wkl(s1, set));
	return (s);
}
