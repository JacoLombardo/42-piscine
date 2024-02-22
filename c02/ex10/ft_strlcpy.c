/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:28:03 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/07 12:23:10 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		len;

	i = 0;
	len = ft_strlen(src);
	while (*src && i < (size - 1))
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	if (size < len)
	{
		return (i);
	}
	else
	{
		return (len);
	}
}
/*
int	main(void)
{
	unsigned int	size;
	char	dest[10];
	char	src[12] = "Hello";

	size = 10;
	//ft_strlcpy(dest, src, size);
	printf("%i\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
	return (0);
}*/
