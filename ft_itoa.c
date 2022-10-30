/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 00:52:12 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/10/30 01:15:32 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	hal(int j)
{
	int	i;

	i = 0;
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
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	return (NULL);
}

char	*ft_itoa(int n)
{
	int		i;
	int		a;
	char	*s;

	if (ks(n))
		return (ks(n));
	i = hal(n);
	a = i + 1;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	s = malloc(i + 1);
	if (!s)
		return (NULL);
	s[i--] = '\0';
	while (--a >= 0)
	{
		s[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	s[i + 1] = '-';
	return (s);
}
