/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:26:10 by ylambark          #+#    #+#             */
/*   Updated: 2021/12/11 18:23:30 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int l)
{
	unsigned int	u;

	u = l;
	if (u >= 10)
		ft_putunsigned (u / 10);
	ft_putchar ((u % 10) + 48);
	return (calcul(l));
}
