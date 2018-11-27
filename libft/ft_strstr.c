/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 22:29:55 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/08 22:58:32 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**
**  locates first occurence of needle in haystack
**
** RETURN
**
**  Needle is empty => Haystack is returned
**  Needle occurs nowhere = > NULL
**  Pointer to the first char of the first occurence of needle.
*/
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	while (haystack[i])
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && (haystack[i + j]))
		{
			j++;
			if (needle[j] == '\0')
				return ((char*)(haystack + i));
		}
		i++;
	}
	return (0);
}
