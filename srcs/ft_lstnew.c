/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 22:52:10 by bahaas            #+#    #+#             */
/*   Updated: 2020/11/02 16:28:38 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new_list;

	new_list = malloc(sizeof(t_list) * 1);
	if (!new_list)
		return(NULL);
	if (new_list)
	{
		new_list->content = content;
		new_list->next = NULL;
	}
	return (new_list);
}

void print_elem(t_list element)
{
	printf("content : %s\n next : %p\n", (char *)element.content, element.next);
}

int main()
{
	t_list *liste;
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;
	t_list *elem4;

	liste = ft_lstnew("Test 1");
	elem1 = ft_lstnew("Bonjour");
	elem2 = ft_lstnew("tu");
	elem3 = ft_lstnew("Veux");
	elem4 = ft_lstnew("bien");
	liste->next = elem1;
	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	while(elem1)
	{
		print_elem(*elem1);
		elem1 = elem1->next;
	}
	return 0;
}
