/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 00:24:24 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/17 21:12:06 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   Applique la fonction f à chaque caractère de la chaine de
**   caractères passée en paramètre en précisant son index en premier
**   argument. Chaque caractère est passé par adresse à la
**   fonction f afin de pouvoir être modifié si nécéssaire
*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &(s[i]));
		i++;
	}
}
