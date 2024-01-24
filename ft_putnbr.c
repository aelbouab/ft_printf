/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouab <aelbouab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:10:17 by aelbouab          #+#    #+#             */
/*   Updated: 2023/12/04 11:31:16 by aelbouab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nb)
{
	int	rv;

	rv = 0;
	if (nb < 0)
	{
		rv += write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		rv += ft_putnbr (nb / 10);
	rv += ft_putchar ((nb % 10) + 48);
	return (rv);
}
