/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:57:35 by ylambark          #+#    #+#             */
/*   Updated: 2021/12/11 18:25:42 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_putnbrvoid(unsigned long long k)
{
	if (k >= 16)
		ft_putnbrvoid(k / 16);
	ft_putchar("0123456789abcdef"[k % 16]);
}

int	ft_putvoid(unsigned long long k)
{
	ft_putchar('0');
	ft_putchar('x');
	ft_putnbrvoid(k);
	return (calculhexa(k));
}
/*int main()
{
    void *p;
    int k;
    k = 5;
    p =&k;
    printf("%p\n",p);
    ft_putvoid(p);
}*/
