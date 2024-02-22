/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:01:08 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/10 14:51:50 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_printline(int first)
{
	char	base[6] = {'0', '1', '2', '3', '4', '\0'};
	int	i;
	int	pos;

	i = 0;
	pos = 1;

	while 
	while (i <= 4)
	{
		write(1, &base[first], 1);
		if (i != 4)
			write(1, " ", 1);
		if (first == 0)
			first = 4;
		first--;
		i++;
	}
	i = 1;
	write(1, "\n", 1);
}

void	ft_rush01(int *arg)
{
	ft_printline(arg[0]-1);
	ft_printline(arg[9]-1);
	ft_printline(arg[10]-1);
	ft_printline(arg[11]-1);
}
