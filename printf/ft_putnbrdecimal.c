/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrdecimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:55:48 by ylambark          #+#    #+#             */
/*   Updated: 2021/12/11 18:21:40 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrdecimal(int d)
{
	long long	s;

	s = d;
	if (s < 0)
	{
		ft_putchar('-');
		s *= -1;
	}
	if (s >= 10)
		ft_putnbrdecimal(s / 10);
	ft_putchar((s % 10) + 48);
	return (calcul(d));
}
