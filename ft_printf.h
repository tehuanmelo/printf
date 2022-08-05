/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-melo <tde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:15:02 by tehuanmelo        #+#    #+#             */
/*   Updated: 2022/08/05 16:38:23 by tde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdarg.h>

int     ft_printf(const char *s, ...);
int     ft_hex_lo(unsigned long int n);
int     ft_hex_up(unsigned long int n);
int	    ft_putnbr(long long n);
int	    ft_putchar(int c);
int	    ft_putstr(char *s);
int	    ft_intlen(long long n);

#endif