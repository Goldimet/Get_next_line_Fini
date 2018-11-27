/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 00:30:01 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/21 20:10:45 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   Applique la fonction f à chaque caractère de la chaine de caractères
**   passée en paramètre pour créer une nouvelle chaine
**   “fraiche” (avec malloc(3)) résultant des applications successives de f.
*/
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		len;
	char	*str;

	if (s == NULL || f == NULL)
		return (0);
	i = 0;
	len = ft_strlen(s);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (0);
	while (i < len)
	{
		str[i] = f((char)(s[i]));
		i++;
	}
	str[i] = '\0';
	return (str);
}
