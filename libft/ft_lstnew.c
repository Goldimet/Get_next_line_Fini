/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 21:33:09 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/21 19:57:42 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   Alloue (avec malloc(3)) et retourne un maillon “frais”. Les
**   champs content et content_size du nouveau maillon sont
**   initialisés par copie des paramètres de la fonction. Si le paramètre
**   content est nul, le champs content est initialisé à
**   NULL et le champs content_size est initialisé à 0 quelque
**   soit la valeur du paramètre content_size. Le champ next
**   est initialisé à NULL. Si l’allocation échoue, la fonction renvoie NULL.
*/
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if ((new = (t_list*)malloc(sizeof(t_list))) == NULL)
		return (0);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		if ((new->content = ft_memalloc(content_size)) == NULL)
		{
			free(new);
			return (0);
		}
		new->content = ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
