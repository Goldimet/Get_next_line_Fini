/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 23:47:48 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/17 18:38:27 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char*)s)[i] = 0;
		i++;
	}
}
/*
**int		main()
**{
**	char str[] = "abcdefghijklmnop";
**	printf("Avant : %s\n", str);
**	bzero(str + 8, 4);
**	printf("Apres bzero str + 8: %s\n", str);
**	ft_bzero(str + 4, 8);
**	printf("Apres ft_bzero str + 4: %s\n", str);
**	return (0);
**}
*/
