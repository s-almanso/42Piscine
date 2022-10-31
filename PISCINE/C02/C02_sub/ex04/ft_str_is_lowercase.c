/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:47:32 by salmanso          #+#    #+#             */
/*   Updated: 2021/11/10 17:11:18 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
		if (!((y >= 'a' && y <= 'z')))
		{
			x = 0;
			break ;
		}
		i++;
	}
	return (x);
}
