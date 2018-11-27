/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 22:20:09 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/10 22:37:23 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**
**   locates last occurence of "c" in "s". Remarque : locates \0 si c = \0
**
** RETURN
**
**   pointer to located char, or NULL si pas c
*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (const char)c)
			return ((char*)(s + len));
		len--;
	}
	return (0);
}
