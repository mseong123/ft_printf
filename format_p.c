/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:04:00 by melee             #+#    #+#             */
/*   Updated: 2023/05/08 17:52:23 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	format_p(va_list ptr)
{
	unsigned long int	n;
	char				*hexa;
	int					count;				

	n = va_arg(ptr, unsigned long int);
	hexa = ft_itoa_base(n, "0123456789abcdef");
	count = ft_strlen(hexa);
	ft_putstr_fd("0x", FD);
	ft_putstr_fd(hexa, FD);
	free(hexa);
	return (count + 2);
}
