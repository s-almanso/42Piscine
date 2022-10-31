/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:52:31 by salmanso          #+#    #+#             */
/*   Updated: 2021/11/22 18:07:37 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*copy;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	copy = malloc(sizeof(str) * len + 1);
	i = 0;
	if (str == NULL)
		return (NULL);
	else
	{
		while (str[i] != '\0')
		{
			copy[i] = str[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
}

struct	s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	t_stock_str	*tab;
	int			i;

	tab = malloc(sizeof(t_stock_str) * (argc + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < argc)
	{
		tab[i].str = argv[i];
		tab[i].copy = ft_strdup(argv[i]);
		tab[i].size = ft_strlen(argv[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
