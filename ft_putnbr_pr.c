/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:02:14 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/22 16:44:15 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int ft_putnbr_pr(int n)
{
	unsigned int	len;

	len = num_len(n);
	if (n == -2147483648)
		ft_putstr_pr("-2147483648");
	if (n < 0)
	{
		ft_putchar_pr('-');
		n *= -1;
	}
	if (n > 9)
		ft_putnbr_pr(n / 10);
	ft_putchar_pr((n % 10) + 48);
	return (len);
}

/*
- we made the function return the length of the string.
*/