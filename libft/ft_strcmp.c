/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 18:58:10 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/17 20:50:10 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}
/*
**int main ()
**{
**	char s1[] = "";
**	char s2[] = "b";
**
**	printf("strcmp : %d\n", strcmp(s1, s2));
**	printf("ma fonction : %d\n", ft_strcmp(s1, s2));
**	return (0);
**}
*/
