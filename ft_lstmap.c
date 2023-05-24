/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:39:06 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/24 16:41:48 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*temp_content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		temp_content = f(lst->content);
		if (!temp_content)
		{
			ft_lstclear(&new_list, del);
		}
		new_node = ft_lstnew(temp_content);
		if (!new_node)
		{
			del(temp_content);
			ft_lstclear(&new_list, del);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
