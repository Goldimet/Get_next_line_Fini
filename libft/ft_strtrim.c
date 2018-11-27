/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 17:38:14 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/17 21:11:31 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   Alloue (avec malloc(3)) et retourne une copie de la chaine
**   passée en paramètre sans les espaces blancs au debut et à la
**   fin de cette chaine. On considère comme espaces blancs les
**   caractères ’ ’, ’\n’ et ’\t’. Si s ne contient pas d’espaces
**   blancs au début ou à la fin, la fonction renvoie une copie de
**   s. Si l’allocation echoue, la fonction renvoie NULL
*/
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		count;
	int		len;
	int		i;
	int		j;
	char	*str;

	i = 0;
	if (s == NULL)
		return (0);
	len = ft_strlen(s);
	while ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t'))
		i++;
	if (i < len)
	{
		j = len - 1;
		while ((s[j] == ' ') || (s[j] == '\n') || (s[j] == '\t'))
			j--;
		count = i + (len - 1 - j);
		if ((str = ft_strnew(len - count)) == NULL)
			return (0);
		return (ft_strncpy(str, s + i, len - count));
	}
	if ((str = ft_strnew(0)) == NULL)
		return (0);
	return (str);
}
