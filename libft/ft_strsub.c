/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 16:51:02 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/24 00:37:48 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   Alloue (avec malloc(3)) et retourne la copie “fraiche” d’un
**   tronçon de la chaine de caractères passée en paramètre. Le
**   tronçon commence à l’index start et à pour longueur len. Si
**   start et len ne désignent pas un tronçon de chaine valide,
**   le comportement est indéterminé. Si l’allocation échoue, la
**   fonction renvoie NULL.
**
** RETURN
**   le troncon
*/
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (s == NULL)
		return (0);
	str = ft_strnew(len);
	if (str == NULL)
		return (0);
	return (ft_strncpy(str, s + start, len));
}
