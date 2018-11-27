/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 16:47:20 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/18 00:19:28 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHQT IT DOES
**   Compare lexicographiquement s1 et s2 jusqu’à n caractères
**   maximum ou bien qu’un ’\0’ ait été rencontré. Si les deux
**   chaines sont égales, la fonction retourne 1, ou 0 sinon
*/
#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if ((i < n) && (s1[i] != s2[i]))
		return (0);
	return (1);
}
/*
**int main()
**{
**	char s1[] = "test";
**	char s2[] = "testu";
**
**	printf("%d\n", ft_strnequ(s1, s2, 5));
**	return (0);
**}
*/
