/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:05:14 by tbelleng          #+#    #+#             */
/*   Updated: 2023/02/16 20:05:16 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	size_hnb(unsigned long nb)
{
	int	i;

	i = 1;
	while (nb >= 16)
	{
		i++;
		nb = nb / 16;
	}
	return (i);
}

int	ft_puthexa(unsigned long nb)
{
	if (nb >= 16)
	{
		ft_puthexa(nb / 16);
		ft_puthexa(nb % 16);
	}
	else if (nb < 10)
		ft_putchar (nb + 48);
	else
		ft_putchar(nb + 87);
	return (size_hnb(nb));
}

int	ft_puthexaup(unsigned int nb)
{
	if (nb >= 16)
	{
		ft_puthexaup(nb / 16);
		ft_puthexaup(nb % 16);
	}
	else if (nb < 10)
		ft_putchar (nb + 48);
	else
		ft_putchar(nb + 55);
	return (size_hnb(nb));
}
