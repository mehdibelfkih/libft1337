/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:16:05 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/11/20 20:50:50 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char		*p;
	unsigned long long	l;

	l = 0;
	p = (unsigned char *)s;
	while (l < n)
	{
		p[l] = (unsigned char)c;
		l++;
	}
	return (s);
}
