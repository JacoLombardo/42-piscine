/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:50:22 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/14 18:08:30 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	sub;

	i = 0;
	sub = 1;
	while (nb > 0)
	{
		nb = nb - sub;
		sub = sub + 2;
		i++;
	}
	if (nb == 0)
		return (i);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%i\n", ft_sqrt(16));
	return (0);
}*/
