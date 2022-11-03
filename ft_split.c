/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 01:29:02 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/11/03 01:19:36 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	io(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s[i] != c)
		j++;
	i++;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			j++;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		p;
	int		len;
	int		start;
	char	**split;

	i = -1;
	len = 0;
	p = -1;
	if (!s || !(split = malloc((io(s, c) + 1))))
		return (0);
	split[io(s, c)] = 0;
	while (s[++i])
		if (s[i] != c)
		{
			start = i;
			while (s[i++] != c)
				len++;
			split[++p] = ft_substr(s, start, len);
			len = 0;
			i--;
		}
	return (split);
	return 0;
}

// int	main(void)
// {
// 	// char	**n;

// 	// n = ft_split("mehdibelfkih", 'i' );
// 	// printf("%s-\n", n[0]);
// 	// printf("%s-\n", n[1]);
// 	// printf("%s-\n", n[2]);
// 	// printf("%s-\n", n[3]);
// 	// printf("%s-\n", n[4]);
// 	// printf("%s-\n", n[5]);
// 	// printf("%s-\n", n[6]);
// 	// printf("%s-\n", n[7]);
// 	// printf("%s-\n", n[8]);
// 	printf("%d", io("mmmmmmmm", 'n'));
// 	}
