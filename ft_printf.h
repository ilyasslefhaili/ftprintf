/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilefhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:46:38 by ilefhail          #+#    #+#             */
/*   Updated: 2021/11/20 19:54:00 by ilefhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
int ft_convert_ghexa(unsigned int nb);
int nbrlen(long nb);
int ft_print_adress(size_t param);
int ft_convert_hexa(unsigned int nb);
int ft_putunsnb(unsigned int nb, int fd);
int  checktype(char c, va_list lst);
int ft_printf(const char *str, ...);
int ft_putchar_fd(char c, int fd);
int	ft_strlen(const char	*str);
int  ft_putstr_fd(char *s, int fd);
int   ft_putnbr_fd(int nb, int fd);

#endif
