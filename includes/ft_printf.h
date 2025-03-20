/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:01:34 by tursescu          #+#    #+#             */
/*   Updated: 2024/06/24 11:11:44 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_putnbr_pr(long n);
int	ft_strlen_pr(const char *s);
int	ft_putchar_pr(char c);
int	ft_putstr_pr(char *s);
int	ft_puthex_pr(unsigned long n, char *hex);
int	ft_printf(const char *string, ...);
int	ft_print_unsigned(unsigned int n);
int	ft_putptr_pr(void *ptr);

#endif