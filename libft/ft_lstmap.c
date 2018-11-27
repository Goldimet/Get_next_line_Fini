/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 19:41:55 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/22 23:25:11 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   Iterates a list lst and applies the function f to each link to
**   create a “fresh” list (using malloc(3)) resulting from the successive
**   applications of f. If the allocation fails, the function
**   returns NULL.
*/
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin;
	t_list	*move;

	if (lst == NULL || f == NULL)
		return (0);
	begin = f(lst);
	if (begin == NULL)
		return (0);
	move = begin;
	lst = lst->next;
	while (lst)
	{
		if ((move->next = f(lst)) == NULL)
		{
			free(begin);
			return (0);
		}
		move = move->next;
		lst = lst->next;
	}
	return (begin);
}
