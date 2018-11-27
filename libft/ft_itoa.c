/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 23:21:47 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/15 20:55:43 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   Alloue (avec malloc(3)) et retourne une chaine de caractères
**   “fraiche” terminée par un ’\0’ représentant l’entier n passé
**   en paramètre. Les nombres négatifs doivent être gérés. Si l’allocation
**   échoue, la fonction renvoie NULL
*/
#include "libft.h"

static int	ft_length(long lg)
{
	int		count;
	long	i;

	count = 1;
	if (lg < 0)
	{
		lg = -lg;
		count++;
	}
	i = 10;
	while (i <= lg)
	{
		count++;
		i = i * 10;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		lens;
	long	lg;

	lg = n;
	lens = ft_length(lg);
	if ((str = ft_strnew(lens)) == NULL)
		return (0);
	if (lg < 0)
	{
		lg = -lg;
		str[0] = '-';
	}
	if (lg == 0)
		str[0] = '0';
	while (lg)
	{
		str[lens - 1] = (lg % 10) + 48;
		lens--;
		lg = lg / 10;
	}
	return (str);
}
/*
**int	main()
**{
**	printf("%s\n", ft_itoa(-2147483648));
**	return (0);
**}
*/
