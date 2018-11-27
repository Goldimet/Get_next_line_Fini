/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 23:49:15 by agilmet           #+#    #+#             */
/*   Updated: 2018/11/23 23:13:12 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   Alloue (avec malloc(3)) et retourne une chaine de caractère
**   “fraiche” terminée par un ’\0’. Chaque caractère de la chaine
**   est initialisé à ’\0’. Si l’allocation echoue, la fonction renvoie NULL
*/
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if ((str = (char*)malloc(sizeof(char) * (size + 1))) == NULL)
		return (0);
	return ((char*)ft_memset(str, '\0', size + 1));
}
