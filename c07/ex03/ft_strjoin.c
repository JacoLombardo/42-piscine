/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:13:26 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/22 10:26:06 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_assign_value(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str2[i])
	{
		str1[i] = str2[i];
		i++;
	}
	return (i);
}

int	ft_calculate_len(char **strs, int size, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		if (i < size - 1)
			len = len + ft_strlen(sep);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*p;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	len = ft_calculate_len(strs, size, sep);
	str = (char *)malloc(len + 1 * sizeof(char));
	if (!str)
		return (0);
	p = str;
	while (i < size)
	{
		str = str + ft_assign_value(str, strs[i]);
		if (i < size -1)
			str = str + ft_assign_value(str, sep);
		i++;
	}
	str[len] = '\0';
	return (p);
}
/*
int	main(void)
{
	char	*tab[6] = {"hello", "world"};
	char	sep[12] = " beautiful ";

	printf("%s\n", ft_strjoin(2, tab, sep));
	return (0);
}*/
