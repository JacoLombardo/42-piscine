/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:35:55 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/05 15:56:42 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	is_print;

	is_print = 1;
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			is_print = 1;
		}
		else
		{
			return (0);
		}
		str++;
	}
	return (is_print);
}
/*
int	main(void)
{
	char	*str;
	char	*str2;

	str = "ad3%8tD";
	str2 = "\n \0";
	ft_str_is_printable(str);
	printf("%i\n", ft_str_is_printable(str));
	printf("%i\n", ft_str_is_printable(str2));
	return (0);
}*/
