/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 21:56:24 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/10 22:34:16 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   Compares byte s1 against byte s2> Both strings are assumed to be
**   "n" bytes long.
**
** RETURN
**    comme ft_strncmp, en unisgned char, sauf qu ici il peut depasser les \0
*/
#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && (((unsigned char*)s1)[i]) == ((unsigned char*)s2)[i])
		i++;
	if (i == n)
		return (0);
	else
		return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}
/*
**int main()
**{
**	char s1[] = "ab\0ab";
**	char s2[] = "abbab";
**
**	printf("ma ft : %d\n", ft_memcmp(s1, s2, 2));
**	printf("libc : %d\n", memcmp(s1, s2, 2));
**	return (0);
**}
*/
