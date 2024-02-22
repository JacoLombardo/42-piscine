/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:28:03 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/13 16:59:54 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		len_s;
	unsigned int		len_d;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dest);
	i = 0;
	if (size == 0 || size <= len_d)
		return (size + len_s);
	while (src[i] && i < size - len_d - 1)
	{
		dest[len_d + i] = src[i];
		i++;
	}
	dest[len_d + i] = '\0';
	return (len_d + len_s);
}
/*
int	main(void)
{
	unsigned int	size;
	char	dest[30] = "1337 42";
	char	src[13] = "Born to Code";

	size = 30;
	printf("Main: %i\n", ft_strlcat(dest, src, size));
	printf("%s\n", dest);
	return (0);
}*/
