/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 22:11:36 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/17 23:24:28 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   The memccpy() function copies bytes from string src to string dst.
**   If the character c (con-verted  an unsigned char) occurs in the string
**   src, the copy stops and a pointer to the byte after the copy of c in the
**   string dst is returned. Otherwise, n bytes are copied, and a NULL
**   pointer is returned
*/
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		if (((unsigned char*)dst)[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
/*
**	while ((((unsigned char*)src)[i]) != ((unsigned char)c) && (i < n))
**	{
**		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
**		i++;
**	}
**	if (i == n)
**		return (0);
**	else
**	{
**		((unsigned char*)dst)[i] = (unsigned char)c;
**		return (dst + i + 1);
**	}
**}
**
**int	main()
**{
**	char dst[] = "qqqqq" ;
**	char src[] = "abczdefgzAAA";
**
**	printf("return mem : %s\n", memccpy(dst, src, 'z', 5));
**	printf("dst   mem : %s\n", dst);
**	printf("return ma ft : %s\n", ft_memccpy(dst, src, 'z', 5));
**	printf("dst ma ft : %s\n", dst);
**	return (0);
**}
*/
