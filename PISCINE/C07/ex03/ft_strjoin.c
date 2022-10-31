/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:59:02 by salmanso          #+#    #+#             */
/*   Updated: 2021/11/20 19:02:00 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_makestr(int size, char **strs, char *sep)
{
	char	*tab;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * size;
	if (size <= 0)
		len = 1;
	tab = (char *)malloc(sizeof(char) * len - 1);
	if (!(tab))
		return (0);
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str_sep;
	int		j;
	int		x;

	i = 1;
	x = 0;
	str_sep = ft_makestr(size, strs, sep);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str_sep[x++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			str_sep[x++] = sep[j++];
		i++;
	}
	str_sep[x] = '\0';
	return (str_sep);
}
