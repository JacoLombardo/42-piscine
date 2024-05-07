/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:24:45 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/14 15:22:06 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str;
	char	*to_find;

	str = "Hellob my beautiful world";
	to_find = "beautiful";
	ft_strstr(str, to_find);
	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}*/
