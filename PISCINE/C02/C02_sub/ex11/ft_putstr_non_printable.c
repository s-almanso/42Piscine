/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:58:47 by salmanso          #+#    #+#             */
/*   Updated: 2021/11/15 19:20:02 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr_non_printable(char *str)
{
	char hexarray[] = "0123456789abcdef";
	int i = 0;
	while (str[i] != '\0')
	{
		if ( str[i] <= 31 || str[i] == 127)
		{
			ft_putchar("\\");
			ft_putchar((str[i] / 16) + '0');
			ft_putchar(hexarray[str[i] % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}

}
