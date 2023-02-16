/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadresse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:05:04 by tbelleng          #+#    #+#             */
/*   Updated: 2023/02/16 20:05:06 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadresse(unsigned long p)
{
	int	u;

	u = 2;
	if (p == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	ft_putstr("0x");
	u += ft_puthexa((int long long unsigned)p);
	return (u);
}
