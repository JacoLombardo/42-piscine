/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalombar <jalombar@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:15:03 by jalombar          #+#    #+#             */
/*   Updated: 2024/02/10 14:47:37 by jalombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check4(int nb, int pos)
{
	if (pos == 1 && nb == 1)
		return (1);
	if (pos == 2 && nb == 2)
		return (1);
	if (pos == 3 && nb == 3)
		return (1);
	if (pos == 4 && nb == 4)
		return (1);
	else
		return (0);
}

int	ft_check2(int nb, int pos)
{
	if (pos == 1 && (nb == 2 || nb == 3))
		return (1);
	if (pos == 2 && (nb == 1 || nb == 2 || nb == 4))
		return (1);
	if (pos == 3 && (nb == 1 || nb == 3 || nb == 4))
		return (1);
	if (pos == 4 && (nb == 1 || nb == 3 || nb == 4))
		return (1);
	else
		return (0);
}

int	ft_check1(int nb, int pos)
{
	if (pos == 1 && nb == 4)
		return (1);
	if (pos == 2 && (nb == 1 || nb == 2 || nb == 3))
		return (1);
	if (pos == 3 && (nb == 1 || nb == 2 || nb == 3))
		return (1);
	if (pos == 4 && (nb == 1 || nb == 2 || nb == 3))
		return (1);
	else
		return (0);
}

int	ft_check3(int nb, int pos)
{
	if (pos == 1 && nb == 2)
		return (1);
	if (pos == 2 && (nb == 1 || nb == 3))
		return (1);
	if (pos == 3 && (nb == 1 || nb == 3 || nb == 4))
		return (1);
	if (pos == 4 && (nb == 1 || nb == 4))
		return (1);
	else
		return (0);
}

int	ft_check(int param, int nb, int pos)
{
	if (param == 4)
		return (ft_check4(nb, pos));
	if (param == 3)
		return (ft_check3(nb, pos));
	if (param == 2)
		return (ft_check2(nb, pos));
	if (param == 1)
		return (ft_check1(nb, pos));
	else
		return (0);
}
