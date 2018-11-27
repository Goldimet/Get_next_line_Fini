/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 22:46:49 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/08 22:59:33 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   locates first occurence of needle in haystack whithin "len" char.
**   Char that appear after \0 are not taken into account.
**
** RETURN
**   needle empty => return haystack
**   no needle => NULL
**   pointer to first char of first occ of needle.
*/
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while ((haystack[i + j]) && (haystack[i + j] == needle[j])
		&& ((i + j) < len))
		{
			j++;
			if (needle[j] == '\0')
				return ((char*)(haystack + i));
		}
		i++;
	}
	return (0);
}
