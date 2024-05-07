/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:34:05 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/12 17:37:18 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		while (*argv[0])
		{
			write(1, argv[0], 1);
			argv[0]++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
