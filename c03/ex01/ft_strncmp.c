/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:56:20 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/06 14:09:36 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
	{
		while ((*s1 || *s2) && i < n)
		{
			if (*s1 != *s2)
			{
				return (*s1 - *s2);
			}
			s1++;
			s2++;
			i++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "ABCDFG";
	s2 = "ABCD";
	ft_strncmp(s1, s2, 4);
	printf("FT: %i\n", ft_strncmp(s1, s2, 4));
	printf("ST: %i\n", strncmp(s1, s2, 4));
	return (0);
}*/
