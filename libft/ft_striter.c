/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 00:20:34 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/17 21:07:15 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   Applique la fonction f à chaque caractère de la chaine de
**   caractères passée en paramètre. Chaque caractère est passé
**   par adresse à la fonction f afin de pouvoir être modifié si
**   nécéssaire
*/
#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(&(s[i]));
		i++;
	}
}
