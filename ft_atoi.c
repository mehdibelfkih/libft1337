/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 07:52:47 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/10/21 14:43:31 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	si;
	int	re;

	i = 0;
	re = 0;
	si = 1;
	while (str[i] == ' ')
		i++;
	if (str[i] != '-' && str[i] != '+' && !ft_isdigit(str[i]))
		return (0);
	if (str[i] == '-')
	{
		si = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		re = re * 10 + (str[i] - 48);
		i++;
	}
	return (re * si);
}
