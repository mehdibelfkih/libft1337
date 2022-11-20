/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:13:18 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/11/20 20:50:25 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*t;

	t = *lst;
	if (!del || !*lst)
		return ;
	while (*lst)
	{
		t = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = t;
	}
}
