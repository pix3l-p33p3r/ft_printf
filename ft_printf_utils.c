/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:07:39 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/31 15:14:04 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;
	int	c;

	c = 0;
	if (!str)
		return (write(1, &"(null)", 6));
	i = -1;
	while (str[++i])
	{
		c += ft_putchar(str[i]);
	}
	return (c);
}

int	ft_putnbr_base_16(unsigned long nb, char *base)
{
	int	z;

	z = 0;
	if (nb >= 16)
		z += ft_putnbr_base_16(nb / 16, base);
	z += ft_putchar(base[nb % 16]);
	return (z);
}

int	ft_putnbr(long n)
{
	int	x;

	x = 0;
	if (n < 0)
	{
		n *= -1;
		x += write(1, "-", 1);
	}
	if (n > 9)
		x += ft_putnbr(n / 10);
	x += ft_putchar((n % 10) + 48);
	return (x);
}
