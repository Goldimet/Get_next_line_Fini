/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 19:34:16 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/16 20:32:03 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**    Parcourt la liste lst en appliquant à chaque maillon la fonction f
**
** PARAMETRES
**    Pointeur sur le premier maillon d’une liste.
**    L’adresse d’une fonction à laquelle appliquer chaque maillon
**    de la liste
*/
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}
