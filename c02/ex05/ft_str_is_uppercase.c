/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:18:35 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/05 15:34:49 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	is_up;

	is_up = 1;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			is_up = 1;
		}
		else
		{
			return (0);
		}
		str++;
	}
	return (is_up);
}
/*
int	main(void)
{
	char	*str;
	char	*str2;

	str = "ASTB";
	str2 = "aFGF";
	ft_str_is_uppercase(str);
	printf("%i\n", ft_str_is_uppercase(str));
	printf("%i\n", ft_str_is_uppercase(str2));
	return (0);
}*/
