/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 16:24:06 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/22 16:44:59 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_pr(unsigned long n, int type)
{
	char	*lower_case = "0123456789abcdef";
	char	*upper_case = "0123456789ABCDEF";
	int	i;

	i = 0;
	if (n / 16)
		i += ft_puthex_pr(n / 16, type);
	if (type == 0)
		i += ft_putchar_pr(lower_case[n % 16]);
	else if (type == 1)
		i += ft_putchar_pr(upper_case[n % 16]);
	return (i);
}