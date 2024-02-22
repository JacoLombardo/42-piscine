/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:54:43 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/14 16:59:07 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i > 1)
		return (1);
	else
		return (0);
}

void	ft_breaknbr(unsigned int nbr, char *base)
{
	unsigned int	type;

	type = ft_strlen(base);
	if (nbr >= type)
	{
		ft_breaknbr((nbr / type), base);
		ft_breaknbr((nbr % type), base);
	}
	else
		write(1, &base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	temp;

	temp = 0;
	if (ft_checkbase(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			temp = -nbr;
			ft_breaknbr(temp, base);
		}
		if (nbr >= 0)
		{
			temp = nbr;
			ft_breaknbr(temp, base);
		}
	}
}
/*
int	main(void)
{
	char	*base1 = "0123456789";
	char	*base2 = "01";
	char	*base3 = "0123456789ABCDEF";
	char	*base4 = "poneyvif";
	int		n;

	n = 0;
	ft_putnbr_base(n, base1);
	write(1, "\n", 1);
	ft_putnbr_base(n, base2);
	write(1, "\n", 1);
	ft_putnbr_base(n, base3);
	write(1, "\n", 1);
	ft_putnbr_base(n, base4);
	return (0);
}*/
