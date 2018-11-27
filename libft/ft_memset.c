/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 21:38:23 by agilmet           #+#    #+#             */
/*   Updated: 2018/11/23 23:03:58 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**    The memset() function writes len bytes of
**    value c (converted to an unsigned char) to the string b
**
** RETURN
**     its 1st argument
*/
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char*)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
**int		main()
**{
**	char str[] = "abcdefghijklmnop";
**	printf("Avant : %s\n", str);
**	memset(str, 'A', 8);
**	printf("Apres memset 8A : %s\n", str);
**	printf("Apres ft_memset 8B : %s\n", ft_memset(str, 'B', 8));
**	return (0);
**}
*/
