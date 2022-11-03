/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:04:44 by elel-yak          #+#    #+#             */
/*   Updated: 2022/11/02 18:20:11 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_fucker(va_list ap, char c, int *i)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (c == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (c == 'X')
		count += ft_putnbr_base_16(va_arg(ap, unsigned int), HEX_UPPER);
	else if (c == 'x')
		count += ft_putnbr_base_16(va_arg(ap, unsigned int), HEX_LOWER);
	else if (c == 'p')
		count += ft_putstr("0x") + ft_putnbr_base_16(va_arg(ap, unsigned long),
				HEX_LOWER);
	else if (c == 'u')
		count += ft_putnbr(va_arg(ap, unsigned int));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (c == '%')
		count += ft_putchar('%');
	else
		(*i)--;
	return (count);
}
int	ft_printf(const char *x, ...)
{
	va_list	z;
	int		nb;
	int		y;

	va_start(z, x);
	y = -1;
	nb = 0;
	while (x[++y])
	{
		if (x[y] == '%')
		{
			y++;
			if (!x[y])
				return (nb);
			nb += ft_printf_fucker(z, x[y], &y);
		}
		else
			nb += ft_putchar(x[i]);
	}
	va_end(z);
	return (nb);
}