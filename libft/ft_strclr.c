/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 00:15:35 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/17 21:13:02 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   Assigne la valeur ’\0’ à tous les caractères de la chaine passée
**   en paramètre
*/
#include "libft.h"

void	ft_strclr(char *s)
{
	size_t i;

	if (s == NULL)
		return ;
	i = ft_strlen(s);
	ft_memset(s, '\0', i);
}
