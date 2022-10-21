/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:29:17 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/10/21 19:06:19 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*s1;
	char	*s2;
	
	s1 = "mehdi belfkih i am mehdi and les parent comme ca nous avons faire a game withe the god";
	s2 = ft_substr(s1, 5, 4);
	
	printf("b > %s\n", s1);
	printf("a > %s\n", s2);
}
