/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:38:27 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/15 10:31:08 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_compare(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	ft_sort_params(char *params[], int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_compare(params[i], params[j]) > 0)
			{
				temp = params[i];
				params[i] = params[j];
				params[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		ft_sort_params(argv, argc);
		while (++i < argc)
		{
			ft_putstr(argv[i]);
		}
	}
	return (0);
}
