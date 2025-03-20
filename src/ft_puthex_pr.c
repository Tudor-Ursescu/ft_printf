/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 16:24:06 by tursescu          #+#    #+#             */
/*   Updated: 2025/03/20 13:18:15 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_puthex_pr(unsigned long n, char *hex)
{
	int	i;

	i = 0;
	if (n / 16)
		i += ft_puthex_pr(n / 16, hex);
	i += ft_putchar_pr(hex[n % 16]);
	return (i);
}
