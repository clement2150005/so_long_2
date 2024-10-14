/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 07:31:00 by arenilla          #+#    #+#             */
/*   Updated: 2024/02/29 09:19:02 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

/*static void del(void *lst)
{
	free(lst);
}

static void	function_toup(void *str)
{
	size_t	i;
	char	*s;

	s = str;
	i = 0;
	while (s[i])
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] = s[i] - 32;
		i++;
	}
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*int	main(void)
{
	t_list	*no1;
	t_list	*no2;
	t_list	*no3;

	no1 = ft_lstnew(ft_strdup("uno"));
	no2 = ft_lstnew(ft_strdup("dos"));
	no3 = ft_lstnew(ft_strdup("tres"));
	no1->next = no2;
	no2->next = no3;
	no3->next = 0;
	printf("antes:\n");
	printf("%s ", (char *)no1->content);
	printf("%s ", (char *)no2->content);
	printf("%s ", (char *)no3->content);
	ft_lstiter(no1, function_toup);
	printf("\ndespués:\n");
	printf("%s ", (char *)no1->content);
	printf("%s ", (char *)no2->content);
	printf("%s ", (char *)no3->content);
	ft_lstclear(&no1, del);
	return (0);
}*/
