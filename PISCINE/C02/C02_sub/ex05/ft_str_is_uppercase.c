/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:38:42 by salmanso          #+#    #+#             */
/*   Updated: 2021/11/10 18:48:18 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		i;
	int		x;
	char	y;

	i = 0;
	x = 1;
	while (x == 1)
	{
		y = str[i];
		if (y == '\0')
		{
			x = 1;
			break ;
		}
		if (!((y >= 'A' && y <= 'Z')))
		{
			x = 0;
			break ;
		}
		i++;
	}
	return (x);
}
