/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:47:34 by arenilla          #+#    #+#             */
/*   Updated: 2024/03/06 16:37:57 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

/*static void del(void *lst)
{
	free(lst);
}

static void	*function_toup(void *str)
{
	size_t	i;
	unsigned char	*s;

	s = str;
	i = 0;
	if (s == 0)
		return (0);
	while (s[i])
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstcpy;
	t_list	*firstcpy;
	void	*after_f;

	if (!lst)
		return (0);
	if (!f)
		return (lst);
	firstcpy = 0;
	while (lst)
	{
		after_f = f(lst->content);
		lstcpy = ft_lstnew(after_f);
		if (!lstcpy && del)
		{
			del(after_f);
			ft_lstclear(&firstcpy, del);
			return (0);
		}
		ft_lstadd_back(&firstcpy, lstcpy);
		lstcpy = lstcpy->next;
		lst = lst->next;
	}
	return (firstcpy);
}

/*int	main(void)
{
	t_list	*no1;
	t_list	*no2;
	t_list	*no3;
	t_list	*lstcpy;

	no1 = ft_lstnew(ft_strdup("uno"));
	no2 = ft_lstnew(ft_strdup("dos"));
	no3 = ft_lstnew(ft_strdup("tres"));
	no1->next = no2;
	no2->next = no3;
	no3->next = 0;
	printf("antes, lst original: ");
	printf("%s ", (char *)no1->content);
	printf("%s ", (char *)no2->content);
	printf("%s\n", (char *)no3->content);
	lstcpy = ft_lstmap(no1, function_toup, del);
	printf("después, lst copia: ");
	while (lstcpy)
	{
		printf("%s ", (char *)lstcpy->content);
		lstcpy = lstcpy->next;
	}
	ft_lstclear(&no1, del);
	ft_lstclear(&lstcpy, del);
	return (0);
}*/
