/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 14:13:45 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/22 23:12:10 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**    Prend en paramètre l’adresse d’un pointeur sur un maillon et
**    libère la mémoire de ce maillon et celle de tous ses successeurs
**    l’un après l’autre avec del et free(3). Pour terminer,
**    le pointeur sur le premier maillon maintenant libéré doit être
**    mis à NULL (de manière similaire à la fonction ft_memdel de
**    la partie obligatoire)
*/
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	if (del == NULL || alst == NULL || *alst == NULL)
		return ;
	if ((*alst)->next)
		ft_lstdel(&(*alst)->next, del);
	ft_lstdelone(alst, del);
}
