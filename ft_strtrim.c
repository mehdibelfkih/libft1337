/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:34:36 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/10/28 00:10:40 by ebelfkih         ###   ########.fr       */
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

	i = 0;
	if (ft_strnstr(s1 + (ft_strlen(s1) - ft_strlen(set)), set, ft_strlen(s1)))
		i = ft_strlen(set);
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		l;
	int		t;
	int		j;
	int		lens;

	l = wkl(s1, set);
	t = wkt(s1, set);
	lens = ft_strlen(s1);
	j = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	s = malloc(lens - t - l + 1);
	if (!s)
		return (NULL);
	while (lens - t - l > j)
	{
		s[j] = s1[l + j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
int main()
{
	char *str = "abbbccccbhjdgsabbcc"; //hjdgs
	printf("%s", ft_strtrim(str, "abc"));
}