/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:53:33 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/05 14:29:04 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	is_num;

	is_num = 1;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			is_num = 1;
		}
		else
		{
			return (0);
		}
		str++;
	}
	return (is_num);
}
/*
int	main(void)
{
	char	*str;

	str = "123g5";
	ft_str_is_numeric(str);
	return (0);
}*/
