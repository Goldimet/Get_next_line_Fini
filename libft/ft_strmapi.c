/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 00:38:26 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/17 21:05:50 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   Applique la fonction f à chaque caractère de la chaine de
**   caractères passée en paramètre en précisant son index pour
**   créer une nouvelle chaine “fraiche” (avec malloc(3)) résultant
**   des applications successives de f
*/
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	if (s == NULL || f == NULL)
		return (0);
	i = 0;
	len = ft_strlen(s);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (0);
	while (i < len)
	{
		str[i] = f(i, (char)(s[i]));
		i++;
	}
	str[i] = '\0';
	return (str);
}
