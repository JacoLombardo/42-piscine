/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:53:33 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/05 14:29:53 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;

	is_alpha = 1;
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			is_alpha = 1;
		}
		else
		{
			return (0);
		}
		str++;
	}
	return (is_alpha);
}
/*
int	main(void)
{
	char	*str;

	str = "asDFTfdf";
	ft_str_is_alpha(str);
	return (0);
}*/
