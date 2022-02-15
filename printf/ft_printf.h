/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:53:11 by ylambark          #+#    #+#             */
/*   Updated: 2021/12/12 16:15:07 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		calcul(long long d);
int		calculhexa(unsigned long long d);
void	ft_putchar(char c);
int		ft_putvoid(unsigned long long k);
int		ft_putstr(char *s);
int		ft_puttohexa(long long int x, char c);
int		ft_putnbrdecimal(int d);
int		ft_putunsigned(unsigned int l);
int		ft_printf(const char *str, ...);

#endif
