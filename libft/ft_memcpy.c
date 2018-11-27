/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 23:56:06 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/17 19:52:40 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   The memcpy() function copies n bytes from memory area src to memory
**   area dst.  If dst and src overlap, behavior is undefined.
*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = -1;
	while (++i < n)
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
	return (dst);
}
/*
**int		main()
**{
**	char des[20] = "11";
**	char src[] = "abcdefghi";
**
**	printf("Avant \"11\" : %s\n", des);
**	memcpy(des, src, 4);
**	printf("Apres memcpy \"n = 4\" : %s\n", des);
**	printf("Apres ft_memcpy \"n=8\" : %s\n", ft_memcpy(des, src, 8));
**	return (0);
**}
*/
