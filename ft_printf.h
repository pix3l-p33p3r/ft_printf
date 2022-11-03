/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pixel_peeper <pixel_peeper@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:05:57 by elel-yak          #+#    #+#             */
/*   Updated: 2022/11/03 22:16:42 by pixel_peepe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

# include<stdarg.h>
# include<unistd.h>
# include<stdio.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr_base_16(unsigned long nb, char *base);
int	ft_putnbr(long n);
int	ft_printf_fucker(va_list ap, char c, int *i);
int	ft_printf(const char *fmt, ...);

#endif
