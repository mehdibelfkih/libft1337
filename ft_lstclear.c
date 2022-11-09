/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:13:18 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/11/09 08:42:17 by ebelfkih         ###   ########.fr       */
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
// void del(void *i)
// {
// 	i = NULL;
// }

// int main(void)
// {
// 	t_list *e;
// 	t_list *m;
// 	char h1[] = "mehdi";
// 	char h2[] = "belfkih";
// 	char h3[] = "1337";
// 	char h4[] = "zbi";
// 	char h5[] = "xnxx";

// 	e = ft_lstnew(h1);
// 	m = e;
// 	// ft_lstadd_back(&e, ft_lstnew(h1));
// 	ft_lstadd_back(&e, ft_lstnew(h2));
// 	ft_lstadd_back(&e, ft_lstnew(h3));
// 	ft_lstadd_back(&e, ft_lstnew(h4));
// 	ft_lstadd_back(&e, ft_lstnew(h5));
// 	// while (m->next)
// 	// {
// 	// 	printf("%s\n", m->content);
// 	// 	m = m->next;
// 	// }
// 	printf("%s\n", m->content);
// 	printf("%s\n", e->content);
// 	m = ft_lstlast(e);
// 	ft_lstclear(&m,del);
// 	printf("%s\n", e->content);
// 	m = e->next;
// 	printf("%s\n", m->content);
// }