/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:01:34 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/22 16:50:12 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int	ft_strlen_pr(const char *s);
int	ft_putchar_pr(char c);
int ft_putnbr_pr(int n);
int	ft_putstr_pr(char *s);
int	ft_puthex_pr(unsigned long n, int type);
int	ft_printf(const char *string, ...);





#endif