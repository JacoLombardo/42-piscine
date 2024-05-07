/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:04:46 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/21 17:05:05 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*range;

	len = max - min;
	i = 0;
	if (min < max)
	{
		range = (int *)malloc(len * sizeof(int));
		if (!range)
			return (NULL);
		while (i < len)
		{
			range[i] = min + i;
			i++;
		}
	}
	else
		return (NULL);
	return (range);
}
/*
int	main(void)
{
	int	i;
	int	*p;

	i = 0;
	p = ft_range(-5, 5);
	while (i < 10)
	{
		printf("%i\n", p[i]);
		i++;
	}
	return (0);
}*/
