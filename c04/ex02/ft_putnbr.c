/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:54:43 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/08 09:36:19 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnbr(char *str, int i, int negative)
{
	if (negative == 1)
		ft_putchar('-');
	while (i < 10)
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_breaknbr(int nb)
{
	char	nb_str[11];
	int		counter;
	int		digit;
	int		negative;
	int		i;

	counter = 0;
	digit = nb;
	negative = 0;
	while (digit != 0)
	{
		if (digit < 0)
		{
			nb_str[9 - counter] = '0' - (digit % 10);
			negative = 1;
		}
		else
			nb_str[9 - counter] = '0' + (digit % 10);
		digit = digit / 10;
		counter++;
	}
	i = 10 - counter;
	ft_printnbr(nb_str, i, negative);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		ft_breaknbr(nb);
	}
}
/*
int	main(void)
{
	ft_putnbr(-1234567890);
	return (0);
}*/
