/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 22:09:27 by agilmet           #+#    #+#             */
/*   Updated: 2018/11/16 21:12:37 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**    locates first occurence of "c" in "s". Remarque : locates \0  si c = \0
**
** RETURN
**    pointer to located char, or NULL si pas trouve.
*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (s == NULL)
		return (0);
	while (*s)
	{
		if (*s == (const char)c)
			return ((char*)s);
		s++;
	}
	if (*s == (const char)c)
		return ((char*)s);
	else
		return (0);
}
