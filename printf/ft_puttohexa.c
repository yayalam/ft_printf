/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttohexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:45:16 by ylambark          #+#    #+#             */
/*   Updated: 2021/12/12 16:23:16 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puttohexa(long long int x, char c)
{
	int	d;

	d = calculhexa(x);
	if (x >= 16)
		ft_puttohexa (x / 16, c);
	if (c == 'x')
		ft_putchar ("0123456789abcdef"[x % 16]);
	if (c == 'X')
		ft_putchar ("0123456789ABCDEF"[x % 16]);
	return (d);
}
/*int main()
{
	ft_puttohexa(100, 100);
}*/
