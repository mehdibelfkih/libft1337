/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:03:41 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/11/07 08:18:10 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*p;

	i = 0;
	p = lst;
	if (!lst)
		return (0);
	while (p != NULL)
	{
		p = p->next;
		i++;
	}
	return (i);
}
