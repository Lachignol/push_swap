/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <ascordil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:34:35 by ascordil          #+#    #+#             */
/*   Updated: 2024/12/17 21:43:42 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int	size(char const *s, char c);
static	void	free_tab(char **tab);
static	int	allo_fill(char **result, int size, int *id_tab, char const *s);

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		start;
	int		i;
	int		id_tab;

	i = 0;
	id_tab = 0;
	result = malloc(sizeof(char *) * (size(s, c) + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		while ((s[i]) && (s[i] == c))
			i++;
		start = i;
		while ((s[i]) && (s[i] != c))
			i++;
		if (i > start)
			if (!allo_fill(result, (i - start), &id_tab, &s[start]))
				return (NULL);
	}	
	return (result[id_tab] = NULL, result);
}

static int	allo_fill(char **result, int size, int *id_tab, char const *s)
{
	result[*id_tab] = malloc(sizeof(char) * (size + 1));
	if (!result[*id_tab])
	{
		free_tab(result);
		return (0);
	}
	ft_strlcpy(result[*id_tab], s, ((size) + 1));
	*id_tab += 1;
	return (1);
}

static	void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}	

static	int	size(char const *s, char c)
{
	int	i;
	int	count;
	int	in_world;

	i = 0;
	count = 0;
	in_world = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!in_world)
			{	
				in_world = 1;
				count ++;
			}
		}
		else
			in_world = 0;
		i++;
	}	
	return (count);
}
