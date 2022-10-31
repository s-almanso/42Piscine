/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:43:34 by salmanso          #+#    #+#             */
/*   Updated: 2021/11/18 22:01:35 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i])
	{
		if (str[i - 1] < 48 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (str[i - 1] < 48 || str[ i - 1] >= 'A' || str[i - 1]<= 'Z' || str[ i - 1] >= 'a' || str[i - 1]<= 'z')
			   if (	str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
		i++;
	}
	return (str);
}
