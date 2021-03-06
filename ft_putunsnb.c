/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilefhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:27:07 by ilefhail          #+#    #+#             */
/*   Updated: 2021/11/21 15:27:10 by ilefhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int  ft_putunsnb(unsigned int nb, int fd)
{	
	if (nb <= 9)
		ft_putchar_fd(nb + '0', fd);
	else
	{
		ft_putunsnb(nb / 10, fd);
		ft_putunsnb(nb % 10, fd);
	}
	return (nbrlen(nb));
}
