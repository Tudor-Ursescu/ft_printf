/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:17:57 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/22 17:21:46 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *string, ...)
{
	int				length;
	int				i;

	va_list args;
	va_start(args, string);
	i = 0;
	length = 0;

	while(string[i])
	{
		if (string[i] == '%')
		{
			i++;
			if (string[i] == 'd')
				length += ft_putnbr_pr(va_arg(args, int)); 
			else if (string[i] == 'i')
				length += ft_putnbr_pr(va_arg(args, int)); 
			else if (string[i] == 's')
				length += ft_putstr_pr(va_arg(args, char *));
			else if (string[i] == 'c')
				length += ft_putchar_pr((char)va_arg(args, int));
			else if (string[i] == 'x')
				length += ft_puthex_pr(va_arg(args, unsigned long), 0);
			else if (string[i] == 'X')
				length += ft_puthex_pr(va_arg(args, unsigned long), 1);
		}else
			length += ft_putchar_pr(string[i]);
		i++;
	}
	va_end(args);
	return (length);
}

// #include <stdio.h>

// int main() {
//     ft_printf("Hello %s!\n", "World");
//     ft_printf("Number: %d\n", 42);
// 	ft_printf("Number: %i\n", 42);
//     ft_printf("Character: %c\n", 'A');
// 	printf("unsigned: %u", 255);
//     return (0);
// }
