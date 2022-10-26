/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:34:36 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/10/26 13:52:11 by ebelfkih         ###   ########.fr       */
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
	int		l;
	int		t;
	int		j;

	l = wkl(s1, set);
	t = wkt(s1, set);
	j = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	s = malloc(t - l + 1);
	if (!s)
		return (NULL);
	while (t > 0)
	{
		s[j] = s[l];
		l++;
		j++;
		t--;
	}
	s[j] = '\0';
	return (s);
}
