/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 00:57:55 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/10/31 07:56:12 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void    f(unsigned int n, char *str)
// {
//     if (n == 3)
//         *str = 'x';
//     if (n == 1)
//         *str = '2';
// }

// int main()
// {
//     char a[6] = "asale";
//     ft_striteri(a, f);
//     printf("%s\n", a);
// }