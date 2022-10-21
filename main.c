/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:29:17 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/10/21 17:00:15 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*c;
	char	*s1;
	char	*s2;
	char	*s3;
	int		*s4;
	int		*s5;
	
	c = "-852852852";
	s1 = "mehdi belfkih i am mehdi and les parent comme ca nous avons faire a game withe the god";
	s2 = strdup(s1);
	s3 = ft_strdup(s1);
	s4 = calloc(4, sizeof(int));
	s5 = ft_calloc(4, sizeof(int));
	printf("o > %d\n", atoi(c));
	printf("m > %d\n", ft_atoi(c));
	printf("o > %s\n", s2);
	printf("m > %s\n", s3);
	printf("o > %lu\n", sizeof(s4));
	printf("m > %lu\n", sizeof(s5));
	printf("o > %d\n", s4[2]);
	printf("m > %d\n", s5[2]);
	s4[3] = 5;
	s5[3] = 5;
	printf("o > %d\n", s4[3]);
	printf("m > %d\n", s5[3]);
	printf("o > %d\n", s4[5]);
	printf("m > %d\n", s5[5]);
}
