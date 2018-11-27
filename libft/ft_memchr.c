/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 21:37:56 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/17 22:24:45 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   locates first occurence of "c" in string "s"
**
** RETURN
**   pointer to to byte located, or NULL if no "c" within "n" bytes.
**
**# include <stdio.h>
*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
			return ((void*)(s + i));
		i++;
	}
	return (0);
}
/*
**int main()
**{
**	char s[] = "abcdefghi";
**	char s2[] = "abcdef";
**
**	printf("libc s: %s\n", memchr(s, 'o', 22));
**	printf("ft s: %s\n", ft_memchr(s, 'o', 22));
**	printf("libc s2 char 999: %s\n", memchr(s2, 999, 6));
**	printf("ft s2 char 999: %s\n", ft_memchr(s2, 999, 6));
**	return (0);
**}
*/
