/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouab <aelbouab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 09:39:02 by aelbouab          #+#    #+#             */
/*   Updated: 2023/12/28 10:09:38 by aelbouab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format(va_list l, char c)
{
	int	rv;

	rv = 0;
	if (c == 'c')
		rv += ft_putchar(va_arg(l, int));
	else if (c == 's')
		rv += ft_putstr(va_arg(l, char *));
	else if (c == 'i' || c == 'd')
		rv += ft_putnbr(va_arg(l, int));
	else if (c == 'u')
		rv += ft_putnbr(va_arg(l, unsigned int));
	else if (c == 'x')
		rv += ft_puthex(va_arg(l, unsigned int), 0);
	else if (c == 'X')
		rv += ft_puthex(va_arg(l, unsigned int), 1);
	else if (c == 'p')
	{
		rv += ft_putstr("0x");
		rv += ft_putad(va_arg(l, unsigned long));
	}
	else
		rv += write(1, &c, 1);
	return (rv);
}

int	ft_printf(const char *f, ...)
{
	va_list	l;
	int		i;
	int		rv;

	va_start(l, f);
	i = 0;
	rv = 0;
	if (write(1, 0, 0) == -1)
		return (-1);
	while (f[i])
	{
		if (f[i] == '%')
		{
			if (f[i + 1] == '\0')
				break ;
			rv += format(l, f[++i]);
			i++;
		}
		else
		{
			rv += write (1, &f[i], 1);
			i++;
		}
	}
	return (rv);
}
