/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:40:17 by arenilla          #+#    #+#             */
/*   Updated: 2024/05/22 10:35:53 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_puthex(unsigned long n, char ch);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned long n);
int	ft_putptr(unsigned long ptr);
int	ft_putstr(char *str);
int	ft_check(char ch, va_list args);
#endif
