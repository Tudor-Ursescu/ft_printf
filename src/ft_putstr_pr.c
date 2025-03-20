/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 08:29:41 by tursescu          #+#    #+#             */
/*   Updated: 2025/03/20 13:18:21 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putstr_pr(char *s)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (s == NULL)
		return (ft_putstr_pr("(null)"));
	while (s[i])
	{
		ft_putchar_pr(s[i]);
		i++;
		len++;
	}
	return (len);
}
