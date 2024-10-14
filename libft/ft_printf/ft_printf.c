/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:46:31 by arenilla          #+#    #+#             */
/*   Updated: 2024/05/22 10:49:55 by arenilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		totalprint;
	int		count;

	va_start(args, format);
	i = 0;
	totalprint = 0;
	if (format)
	{
		while (format[i] != '\0')
		{
			if (format[i] == '%' && format[i + 1] != '\0')
				count = ft_check(format[++i], args);
			else if (format[i] != '%')
				count = ft_putchar(format[i]);
			if (count == -1)
				return (-1);
			i++;
			totalprint = totalprint + count;
		}
	}
	va_end(args);
	return (totalprint);
}

/*int	main(void)
{
    char c = 'A';
    char *str = "Hello, world!";
    char *s = NULL;
    int d = 123;
    unsigned int u = 456;
    int x = 0x1A;
    int X = 0x1A;
    int printf_ret, ft_printf_ret;
    
    printf("Pruebas para el especificador 'c':\n");
    printf_ret = printf("O: %c\n", c);
    ft_printf_ret = ft_printf("R: %c\n", c);
    printf("printf_ret: %d, ft_printf_ret: %d\n", printf_ret, ft_printf_ret);
    
     printf("\nPruebas para el especificador 's':\n");
    printf_ret = printf("O: %s\n", s);
    ft_printf_ret = ft_printf("R: %s\n", s);
    printf("printf_ret: %d, ft_printf_ret: %d\n", printf_ret, ft_printf_ret);

   printf("\nPruebas para el especificador 's':\n");
    printf_ret = printf("O: %s\n", str);
    ft_printf_ret = ft_printf("R: %s\n", str);
    printf("printf_ret: %d, ft_printf_ret: %d\n", printf_ret, ft_printf_ret);
    
     printf("\nPruebas para el especificador 'p':\n");
    printf_ret = printf("O: %p\n", NULL);
    ft_printf_ret = ft_printf("R: %p\n", NULL);
    printf("printf_ret: %d, ft_printf_ret: %d\n", printf_ret, ft_printf_ret);

   printf("\nPruebas para el especificador 'p':\n");
    printf_ret = printf("O: %p\n", &c);
    ft_printf_ret = ft_printf("R: %p\n", &c);
    printf("printf_ret: %d, ft_printf_ret: %d\n", printf_ret, ft_printf_ret);
    
    printf("\nPruebas para el especificador 'd':\n");
    printf_ret = printf("O: %d\n", d);
    ft_printf_ret = ft_printf("R: %d\n", d);
    printf("printf_ret: %d, ft_printf_ret: %d\n", printf_ret, ft_printf_ret);
    
    printf("\nPruebas para el especificador 'i':\n");
    printf_ret = printf("O: %i\n", d);
    ft_printf_ret = ft_printf("R: %i\n", d);
    printf("printf_ret: %d, ft_printf_ret: %d\n", printf_ret, ft_printf_ret);
    
    printf("\nPruebas para el especificador 'u':\n");
    printf_ret = printf("O: %u\n", u);
    ft_printf_ret = ft_printf("R: %u\n", u);
    printf("printf_ret: %d, ft_printf_ret: %d\n", printf_ret, ft_printf_ret);
    
    printf("\nPruebas para el especificador 'x':\n");
    printf_ret = printf("O: %x\n", x);
    ft_printf_ret = ft_printf("R: %x\n", x);
    printf("printf_ret: %d, ft_printf_ret: %d\n", printf_ret, ft_printf_ret);
    
    printf("\nPruebas para el especificador 'X':\n");
    printf_ret = printf("O: %X\n", X);
    ft_printf_ret = ft_printf("R: %X\n", X);
    printf("printf_ret: %d, ft_printf_ret: %d\n", printf_ret, ft_printf_ret);
    
    printf("\nPruebas para el especificador '%%':\n");
    printf_ret = printf("O: %%\n");
    ft_printf_ret = ft_printf("R: %%\n");
    printf("printf_ret: %d, ft_printf_ret: %d\n", printf_ret, ft_printf_ret);

    printf_ret = printf("O: esto es todo\n");
    ft_printf_ret = ft_printf("R: esto es todo\n");
    printf("printf_ret: %d, ft_printf_ret: %d\n", printf_ret, ft_printf_ret);

    return 0;
}*/
