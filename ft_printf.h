/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elel-yak <elel-yak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:06:02 by elel-yak          #+#    #+#             */
/*   Updated: 2022/10/31 15:14:09 by elel-yak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>
# include <ctype.h>
# include <stddef.h>
# include <signal.h>
# include <stdbool.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr_base_16(unsigned long nb, char *base);
int	ft_putnbr(long n);
int	ft_formatter(va_list ap, char c, int *i);
int	ft_printf(const char *str, ...);

#endif
