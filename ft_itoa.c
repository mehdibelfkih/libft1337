/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 00:52:12 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/10/28 03:03:12 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
    int i;
    int j;
    int a;
    char *s;
    
    j = n;
    i = 0;
    while (j != 0)
    {
      j = j / 10;
      i++;  
    }
    a = i ;
    if (n < 0)
    {
        n = -n;
        i++;
    }
    s = malloc(i + 1);
    s[i] = '\0';
    i--;
    while (a >= 0)
    {
        s[i] = (n%10) + 48;
        n = n / 10;
        i--;
        a--;
    }
    s[i + 1] = '-';
    return (s);
}
