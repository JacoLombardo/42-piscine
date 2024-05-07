/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:22:33 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/21 13:55:49 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*temp;

	len = max - min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	temp = (int *)malloc(len * sizeof(int));
	if (!temp || !range)
		return (-1);
	else
	{
		while (i < len)
		{
			temp[i] = min + i;
			i++;
		}
		*range = temp;
		return (len);
	}
}
