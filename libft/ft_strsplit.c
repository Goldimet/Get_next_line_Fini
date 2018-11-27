/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 22:02:54 by agilmet           #+#    #+#             */
/*   Updated: 2018/10/22 22:57:11 by agilmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** WHAT IT DOES
**   Alloue (avec malloc(3)) et retourne un tableau de chaines de
**   caractères “fraiches” (toutes terminées par un ’\0’, le tableau
**   également donc) résultant de la découpe de s selon le caractère
**   c. Si l’allocation echoue, la fonction retourne NULL. Exemple :
**   ft_strsplit("*salut*les***etudiants*", ’*’) renvoie
**   le tableau ["salut", "les", "etudiants"].
**
** RETURN
**   le tableau de chaines de caract fraiche resultant de decoupe.
*/
#include "libft.h"

static int		ft_count_words(char const *s, char c)
{
	int		i;
	int		count;
	int		lens;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] == c)
				i++;
		}
		if (s[i])
			i++;
	}
	if ((lens = ft_strlen(s)) == 0)
		return (0);
	if (s[0] == c)
		count--;
	if (s[lens - 1] == c)
		count--;
	return (count + 1);
}

static char		*ft_makestring(char const **s, char *tabj, char c)
{
	int i;
	int lens;

	i = 0;
	lens = 0;
	while ((*s)[i] == c)
		i++;
	while ((*s)[i] && (*s)[i] != c)
	{
		lens++;
		i++;
	}
	if ((tabj = ft_strnew(lens)) == NULL)
		return (NULL);
	tabj = ft_strncpy(tabj, (*s) + i - lens, lens);
	tabj[lens] = '\0';
	(*s) = (*s) + i;
	return (tabj);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		ltab;
	int		j;

	if (s == NULL)
		return (0);
	ltab = ft_count_words(s, c);
	if ((tab = (char**)malloc(sizeof(char*) * (ltab + 1))) == NULL)
		return (NULL);
	tab[ltab] = NULL;
	j = 0;
	while (j < ltab)
	{
		if ((tab[j] = ft_makestring(&s, tab[j], c)) == NULL)
		{
			while (j-- >= 0)
				free(tab[j]);
			free(tab);
			return (NULL);
		}
		j++;
	}
	return (tab);
}
/*
**int main ()
**{
**	char	s[] = "";
**	char	**tt;
**
**	ft_strsplit(s, '*');
**	printf("%s\n", tt[0]);
**	return (0);
**}
*/
