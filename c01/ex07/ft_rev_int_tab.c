/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:08:09 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/06 10:00:29 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size -1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
/*
int	main(void)
{
	int	tab[] = {1, 4, 12, 33, 56};
	int	size;
	int	i;

	size = 5;
	i = 0;
	ft_rev_int_tab(tab, size);
	while(i < size)
	{
		printf("%i\n", tab[i]);
		i++;
	}
	return (0);
}*/
