/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:28:11 by melee             #+#    #+#             */
/*   Updated: 2023/05/08 18:06:09 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	format_parser(char c, va_list ptr)
{
	int		count;

	count = 0;
	if (c == 'c')
		count = format_c(ptr);
	else if (c == 's')
		count = format_s(ptr);
	else if (c == 'p')
		count = format_p(ptr);
	else if (c == 'd' || c == 'i')
		count = format_d(ptr);

	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		count;

	count = 0;
	va_start(ptr, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += format_parser(*str, ptr);
		}
		else
		{
			ft_putchar_fd(*str, FD);
			count++;
		}
		str++;
	}
	va_end(ptr);
	return (count);
}
