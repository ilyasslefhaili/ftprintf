/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilefhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 21:15:07 by ilefhail          #+#    #+#             */
/*   Updated: 2021/11/21 21:15:55 by ilefhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
static  char *swap(char *str, int i)
{
	int j;
	char s;

	j = 0;
	i = i - 1;
	while (i > j)
	{
		s = str[i];
		str[i] = str[j];
		str[j] = s;
		i--;
		j++;
	}
	return (str);
}
static int ft_convert(size_t nb)
{
	int i;
	char tab[100];
	char *hexa;
	char *str;

	i = 0;
	hexa = "0123456789abcdef";
	if(nb == 0)
	{
		ft_putchar_fd('0', 1);
		return(1);
	}
	while(nb)
	{
		tab[i] = hexa[nb % 16];
		nb /= 16;
		i++;
	}
	tab[i] = '\0';
	str = swap(tab, ft_strlen(tab));
	ft_putstr_fd(str ,1);
	return(ft_strlen(tab));
}

int ft_print_adress(size_t ap)
{
    int a;
    a = 2;
    ft_putstr_fd("0x",1);
    a += ft_convert(ap);
    return (a);
}