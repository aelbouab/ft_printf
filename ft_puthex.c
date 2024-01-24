/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouab <aelbouab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:06:07 by aelbouab          #+#    #+#             */
/*   Updated: 2023/12/04 11:26:55 by aelbouab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long nb, int ul)
{
	int		rv;
	char	*j;

	rv = 0;
	if (ul == 0)
		j = "0123456789abcdef";
	else
		j = "0123456789ABCDEF";
	if (nb >= 16)
	{
		rv += ft_puthex((nb / 16), ul);
		rv += ft_putchar(j[(nb % 16)]);
	}
	else
		rv += ft_putchar(j[nb]);
	return (rv);
}
