/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 17:30:03 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/17 22:03:51 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**  copies LEN bytes from src to dest. The two strings may overlap.
**
** DIFFERENCE AVEC MEMCPY
**  the two strings may overlap here.
**  cad si src et dst pointent vers le meme str et que src < dst (src pointe
**  vers une partie du string situee avant la partie du string pointee par dst
**
**  Overlap risque de faire bugger systeme de memcpy si "n" fait aller
**  src a l endroit ou il chevauche avec dest. Car dans ce cas, l original
**  char pointee par src aura deja ete modifie(car ce char est aussi le
**  premier char de dst a avoir ete modifie);
**
**  Par contre memmove gere le probleme de chevauchement.
**  fait "bugger" memcpy dans le sens ou il arrivera un
**  moment
**
** RETURN
**  pointer to  dest.
**
**#include <stdio.h>
*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src >= dst)
		return (ft_memcpy(dst, src, len));
	else
	{
		while (len)
		{
			((char*)dst)[len - 1] = ((char*)src)[len - 1];
			len--;
		}
		return (dst);
	}
}
/*
**int main()
**{
**	char str[] = "123456789abcdef";
**
**	printf("%s\n", ft_memmove(str + 2, str + 1, 5));
**	printf("%s\n", memmove(str + 2, str + 1, 5));
**	return (0);
**}
*/
