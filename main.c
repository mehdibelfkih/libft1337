/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:29:17 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/10/22 13:20:45 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "el mehdi";
	s2 = "belfkih";
	s3 = ft_strjoin(s1, s2);
	printf("b > %s\n", s1);
	printf("o > %s\n", s2);
	printf("o > %s\n", s3);
}
