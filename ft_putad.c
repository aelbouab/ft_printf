/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putad.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouab <aelbouab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:45:27 by aelbouab          #+#    #+#             */
/*   Updated: 2023/12/04 11:26:58 by aelbouab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putad(unsigned long n)
{
	int		rv;
	char	*j;

	rv = 0;
	j = "0123456789abcdef";
	if (n >= 16)
	{
		rv += ft_putad(n / 16);
		rv += ft_putchar(j[n % 16]);
	}
	else
		rv += ft_putchar(j[n]);
	return (rv);
}
