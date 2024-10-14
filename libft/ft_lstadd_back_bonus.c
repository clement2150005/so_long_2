/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:50:36 by arenilla          #+#    #+#             */
/*   Updated: 2024/03/05 14:23:24 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	lastnode = ft_lstlast(*lst);
	lastnode->next = new;
}

/*static void del(void *lst)
{
	free(lst);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*new;

	node1 = ft_lstnew(ft_strdup("nodo"));
	node2 = ft_lstnew(ft_strdup("ultimo nodo vejo"));
	node1->next = node2;
	node2->next = NULL;
	new = ft_lstnew(ft_strdup("nuevo ultimo nodo, exito"));
	new->next = NULL;
	printf("antes: %s\n", (char *)ft_lstlast(node1)->content);
	ft_lstadd_back(&node1, new);
	printf("después: %s\n", (char *)ft_lstlast(node1)->content);
	ft_lstclear(&node1, del);
	return (0);
}*/
