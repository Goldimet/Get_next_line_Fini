/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 16:41:47 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/17 20:42:33 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   Compare lexicographiquement s1 et s2. Si les deux chaines
**   sont égales, la fonction retourne 1, ou 0 sinon
**
** RETURN
**   1 ou 0 selon que les deux chaines sont égales ou non
*/
#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
/*
**int main()
**{
**	char s1[] = "";
**	char s2[] = "";
**
**	printf("%D\n", ft_strequ(s1, s2));
**	return (0);
**}
*/
