/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:29:17 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/10/25 13:46:41 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*s3;

	// s3 = ft_strjoin("", "NULL");
	s3 = ft_strtrim("mehdi", "mehdi");
	printf("o > %s\n", s3);
}
