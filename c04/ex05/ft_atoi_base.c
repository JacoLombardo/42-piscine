/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 09:47:18 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/16 10:27:22 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

int	ft_is_inbase(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i + 1);
		i++;
	}
	return (0);
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

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r'
		|| *str == '\v' || *str == '\f')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	if (ft_checkbase(base))
	{
		while (ft_is_inbase(*str, base))
		{
			result = (result * ft_strlen(base)) 
				+ (ft_is_inbase(*str, base) - 1);
			str++;
		}
	}
	return (result * sign);
}
/*
int	main(void)
{
	printf("%i\n", ft_atoi_base("    +++---101010sdgor", "01"));
	return (0);
}*/
