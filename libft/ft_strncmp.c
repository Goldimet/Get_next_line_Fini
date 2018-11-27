/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:13:09 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/17 20:50:03 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   The strncmp() function compares not more than n characters.
**   Because strncmp() is designed for comparing strings rather than binary
**   data, characters that appear after a `\0' character are not compared
**
** RETURN
**   an integer greater than, equal to, or less than 0,
**   according as the string s1 is greater than, equal to, or less than
**   the string s2.  The compari- son is done using unsigned characters
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && (i < n))
		i++;
	if (n == 0)
		return (0);
	else if (i == n)
		return (((unsigned char*)s1)[i - 1] - ((unsigned char*)s2)[i - 1]);
	else
		return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}
/*
**int main()
**{
**	char s[] = "abc";
**	char s2[] = "abcdef";
**
**	printf("libc s : %d\n", strncmp(s, s2, 3));
**	printf("ma fct : %d\n", ft_strncmp(s, s2, 3));
**	return (0);
**}
*/
