/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 10:22:51 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/10 12:16:26 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
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

int	*ft_atoi(char *str)
{
	int	*nbr_str;
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_strlen(str);
	nbr_str = (int*)malloc(32 * sizeof(int));
	while (i < len)
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			nbr_str[j] = str[i] - '0';
			j++;
			i++;
		}
		i++;
	}
	nbr_str[j] = '\0';
	return (nbr_str);
}
