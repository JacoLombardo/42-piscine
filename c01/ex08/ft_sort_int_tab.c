/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:28:24 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/05 11:59:37 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	size;
	int	i;
	int	tab[5] = {4, 34, 17, 1, 23};

	i = 0;
	size = 5;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}*/
