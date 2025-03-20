/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 08:58:46 by tursescu          #+#    #+#             */
/*   Updated: 2025/03/20 13:18:19 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putptr_pr(void *ptr)
{
	int	i;

	i = 0;
	if (ptr == 0)
		return (ft_putstr_pr("(nil)"));
	i += ft_putstr_pr("0x");
	i += ft_puthex_pr((unsigned long)ptr, "0123456789abcdef");
	return (i);
}
