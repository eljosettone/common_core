/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanalleg <fanalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:58:21 by fanalleg          #+#    #+#             */
/*   Updated: 2026/04/29 17:42:11 by fanalleg         ###   ########.fr       */
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

int	ft_check(va_list arg, char c);
int	ft_hexa_lower(int nbr);
int	ft_hexa_upper(int nbr);
int	ft_printf(const char *str, ...);
int	ft_putnbr(long nb);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putunbr(unsigned long nb);
int	ft_pointerhexa(void *ptr);
int	ft_print_hex(void *ptr);

#endif