/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 00:52:12 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/11/02 22:01:25 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	hal(int j)
{
	int	i;

	i = 0;
	if (j < 0)
		i++;
	while (j != 0)
	{
		j = j / 10;
		i++;
	}
	return (i);
}

char	*ks(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;

	i = hal(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	s = ft_calloc(i + 1, 1);
	if (!s)
		return (NULL);
	i--;
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	while (n)
	{
		s[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	return (s);
}
