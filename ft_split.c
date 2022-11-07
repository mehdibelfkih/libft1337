/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 01:29:02 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/11/07 00:38:31 by ebelfkih         ###   ########.fr       */
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

int	ft_clear(char **spl)
{
	int	i;

	i = 0;
	while (spl[i])
	{
		free(spl[i]);
		i++;
	}
	free(spl);
	return (-1);
}

int	plen(char **spl, const char *s, char c)
{
	int			i;
	size_t		p;
	size_t		len;
	int			start;

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
			if (spl[p - 1] == NULL)
				return (ft_clear(spl));
			len = 0;
			i -= 2;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**spl;

	spl = malloc((io(s, c) + 1) * sizeof(char *));
	if (!spl)
		return (0);
	spl[io(s, c)] = 0;
	if (plen(spl, s, c) < 0)
		return (NULL);
	return (spl);
}
