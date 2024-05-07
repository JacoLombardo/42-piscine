/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:19:48 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/06 16:20:28 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*p;
	unsigned int	i;

	p = dest;
	i = 0;
	while (*dest)
	{
		dest++;
	}
	while (*src && i < nb)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	return (p);
}
/*
int	main(void)
{
	char	dest[12] = "Hello";
	char	src[7] = " World";

	ft_strncat(dest, src, 3);
	printf("Main: %s\n", ft_strncat(dest, src, 3));
	return (0);
}*/
