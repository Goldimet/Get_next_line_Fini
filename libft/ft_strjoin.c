/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 17:01:18 by agilmet           #+#    #+#             */
/*   Updated: 2018/11/27 16:55:48 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   Alloue (avec malloc(3)) et retourne une chaine de caractères
**   “fraiche” terminée par un ’\0’ résultant de la concaténation
**   de s1 et s2. Si l’allocation echoue, la fonction renvoie NULL
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		l1;
	int		l2;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (0);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	str = ft_strnew(l1 + l2);
	if (str == NULL)
		return (0);
	str = ft_strcpy(str, s1);
	return (ft_strcat(str, s2));
}
