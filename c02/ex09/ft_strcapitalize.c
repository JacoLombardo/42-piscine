/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:01:18 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/07 15:39:16 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_alphanum(char *str)
{
	if (*str >= 48 && *str <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_str_change(char *str, int cap)
{
	if ((*str >= 'a' && *str <= 'z') && cap == 1)
	{
		*str = *str - ('a' - 'A');
	}
	else if ((*str >= 'A' && *str <= 'Z') && cap == 0)
	{
		*str = *str + ('a' - 'A');
	}
	return (str); 
}

char	*ft_strcapitalize(char *str)
{
	char	*p;
	int		cap;

	p = str;
	cap = 1;
	while (*str)
	{
		if (ft_is_alphanum(str) == 1)
		{
			*str = *ft_str_change(str, cap);
			cap = 0;
		}
		else
		{
			cap = 1;
		}
		str++;
	}
	return (p);
}
/*
int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots cinquante+et+un";

	//ft_strcapitalize(str);
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}*/
