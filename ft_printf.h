/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:00:40 by melee             #+#    #+#             */
/*   Updated: 2023/05/08 18:04:49 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# define FD 1

# include "libft.h"
# include "stdarg.h"

int		ft_printf(const char *str, ...);
char 	*ft_itoa_base(unsigned long n, char *base);
int		format_c(va_list ptr);
int		format_s(va_list ptr);
int		format_p(va_list ptr);
int		format_d(va_list ptr);

#endif
