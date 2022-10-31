/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:53:47 by salmanso          #+#    #+#             */
/*   Updated: 2021/11/10 18:54:49 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
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
		if (y < 32 || y >= 127)
		{
			x = 0;
			break ;
		}
		i++;
	}
	return (x);
}
