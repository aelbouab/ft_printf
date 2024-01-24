/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouab <aelbouab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:29:11 by aelbouab          #+#    #+#             */
/*   Updated: 2023/12/04 11:32:47 by aelbouab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *f, ...);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(long nb);
int	ft_puthex(unsigned long nb, int ul);
int	ft_putad(unsigned long n);

#endif