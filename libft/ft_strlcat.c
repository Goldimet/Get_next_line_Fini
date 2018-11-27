/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:55:19 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/18 00:40:47 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   concatenate src with dst. they must be null terminated.
**   strlcat takes the full size of the buffer (not just length) and null
**   terminate the result (as long as one byte free ramining in dst)
**   Strlcat copies up to size - 1 char from SRc to DST ans null term.
**   Rq : size est ce qu il reste de libre dans le buffer de DST.
**
** RETURN
**   length it tries to create (len src + len dst)
**   Rq : if strlcat traverses size char without finding a NULL,
**   the length returned is size + len src and dst is not null termin.
**   This shouldnt happen tho, it would mean that size is incorrect
**   or dst not a proper string.
*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = ft_strlen(dst);
	j = 0;
	while (((i + j + 1) < size) && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
	{
		dst[i + j] = '\0';
		return (i + ft_strlen(src));
	}
	else
		return (size + ft_strlen(src));
}
/*
**int	main()
**{
**	char dst[] = "\0rrrrr\0\0\0\0\0a\0\0\0";
**	const char src[] = "lorem ipsum";
**
**	printf("return strl : %zu\n", strlcat(dst, src, 15));
**	printf("dst strl : %s\n", dst);
**	printf("%c\n", dst[13]);
**	printf("return ma ft : %zu\n", ft_strlcat(dst, src, 15));
**	printf("dst ma ft : %s\n", dst);
**	printf("%c\n", dst[11]);
**	return (0);
**}
*/
