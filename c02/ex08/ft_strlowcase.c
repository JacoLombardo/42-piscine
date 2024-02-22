/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:58:27 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/05 17:36:15 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*lower;

	lower = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + ('a' - 'A');
		}
		str++;
	}
	return (lower);
}
/*
int	main(void)
{
	char	str[] = "aDGgRDd";

	ft_strlowcase(str);
	printf("%s\n", ft_strlowcase(str));
	return (0);
}*/
