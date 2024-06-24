/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 08:58:46 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/24 09:10:42 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
