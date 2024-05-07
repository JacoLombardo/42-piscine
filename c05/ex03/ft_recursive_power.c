/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:17:34 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/13 16:50:39 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, (power - 1)));
}
/*
int	main(void)
{
	printf("%i\n", ft_recursive_power(12, 10));
	return (0);
}*/
