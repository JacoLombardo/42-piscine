/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:18:35 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/05 15:31:08 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	is_low;

	is_low = 1;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			is_low = 1;
		}
		else
		{
			return (0);
		}
		str++;
	}
	return (is_low);
}
/*
int	main(void)
{
	char	*str;
	char	*str2;

	str = "asda";
	str2 = "asdF";
	ft_str_is_lowercase(str);
	printf("%i\n", ft_str_is_lowercase(str));
	printf("%i\n", ft_str_is_lowercase(str2));
	return (0);
}*/
