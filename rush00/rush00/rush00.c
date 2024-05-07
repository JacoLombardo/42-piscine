/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 10:09:41 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/03 17:32:57 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_start(int x)
{
	int	i;

	i = 0;
	ft_putchar('o');
	if (x > 1)
	{
		if (x > 2)
		{
			while (i < (x -2))
			{
				ft_putchar('-');
				i++;
			}
		}
		ft_putchar('o');
		ft_putchar('\n');
	}
}

void	ft_print_line(int x)
{
	int	i;

	i = 0;
	ft_putchar('|');
	if (x > 1)
	{
		if (x > 2)
		{
			while (i < (x -2))
			{
				ft_putchar(' ');
				i++;
			}
		}
		ft_putchar('|');
		ft_putchar('\n');
	}
}

void	ft_print_end(int x)
{
	int	i;

	i = 0;
	ft_putchar('o');
	if (x > 1)
	{
		if (x > 2)
		{
			while (i < (x -2))
			{
				ft_putchar('-');
				i++;
			}
		}
		ft_putchar('o');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (!(x <= 0 | y <= 0))
	{
		ft_print_start(x);
		if (y > 1)
		{
			if (y > 2)
			{
				while (i < (y -2))
				{
					ft_print_line(x);
					i++;
				}
			}
			ft_print_end(x);
		}
	}
}
