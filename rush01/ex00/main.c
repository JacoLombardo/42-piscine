/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 10:09:36 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/10 13:57:14 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_atoi(char *str);
void	ft_rush01(int *arg);

int	ft_checkargv(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if ((argv[i] < '1' || argv[i] > '4') && argv[i] != ' ')
		{	
			return (0);
		}
		if (argv[i] >= '1' && argv[i] <= '4')
		{
			if (argv[i + 1] >= '1' && argv[i + 1] <= '4')
				return (0);
		}
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	*arg;
	
	if (ac == 2 && ft_checkargv(av[1]) == 1)
	{
		arg = ft_atoi(av[1]);
		ft_rush01(arg);
		return (0);
	}
}
