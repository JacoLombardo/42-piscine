/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:35:19 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/22 17:38:06 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
//#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc(ft_strlen(src) + 1 * sizeof(char));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*arr;
	char				*copy;

	i = 0;
	arr = malloc(ac * sizeof(struct s_stock_str));
	if (!arr)
		return (NULL);
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		copy = ft_strdup(av[i]);
		if (!copy)
			return (NULL);
		arr[i].copy = copy;
		i++;
	}
	arr[i - 1].str = 0;
	return (arr);
}
/*
int	main(void)
{
	int	i;

	i = 0;
	char	*strs[5] ={"hello", "world", "ciaone"};
	struct s_stock_str *big = ft_strs_to_tab(5, strs);
	while (big[i].copy)
	{
		printf("copy:%s\n", big[i].str);
		i++;
	}
	ft_show_tab(ft_strs_to_tab(5, strs));
	return (0);
}*/
