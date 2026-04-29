/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fannyallegre <fannyallegre@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:58:21 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/29 22:00:08 by fannyallegr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stddef.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_check(va_list *arg, char c);
int	ft_hexa_lower(unsigned int nbr);
int	ft_hexa_upper(unsigned int nbr);
int	ft_putnbr(long nb);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putunbr(unsigned long nb);
int	ft_point_hexa(void *ptr);

#endif