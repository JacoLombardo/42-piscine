/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:02:35 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/12 16:16:41 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nbr;

	nbr = 1;
	i = 0;
	while (i < power)
	{
		nbr = nbr * nb;
		i++;
	}
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nbr);
}
/*
int	main(void)
{
	printf("%i\n", ft_iterative_power(5, 2));
	return (0);
}*/
