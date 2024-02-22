/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:32:57 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/12 16:48:43 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}
/*
int	main(void)
{
	printf("%i\n", ft_fibonacci(2));
	return (0);
}*/
