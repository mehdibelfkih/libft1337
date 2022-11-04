/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 01:29:02 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/11/04 22:49:24 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	io(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*s == '\0')
		return (0);
	if (s[i] != c)
		j++;
	while (s[++i])
		if (s[i] != c && s[i - 1] == c)
			j++;
	return (j);
}
// void	plen(char **splt, char *s, char c)
// {
// 	int		i;
// 	int		p;
// 	int		len;
// 	int		start;

// 	i = -1;
// 	len = 0;
// 	p = 0;
// 	while (s[++i])
// 	{
// 		if (s[i] != c)
// 		{
// 			start = i;
// 			while (s[i++] != c && s[i - 1])
// 				len++;
// 			splt[p++] = ft_substr(s, start, len);
// 			len = 0;
// 			i -= 2;
// 		}
// 	}
// }
char	**ft_split(char const *s, char c)
{
	int		i;
	int		p;
	int		len;
	int		start;
	char	**spl;

	i = -1;
	len = 0;
	p = 0;
	spl = malloc((io(s, c) + 1) * sizeof(char *));
	if (!spl)
		return (0);
	spl[io(s, c)] = 0;
		i = -1;
	len = 0;
	p = 0;
	while (s[++i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i++] != c && s[i - 1])
				len++;
			spl[p++] = ft_substr(s, start, len);
			len = 0;
			i -= 2;
		}
	}
	return (spl);
}
