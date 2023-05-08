/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:16:37 by melee             #+#    #+#             */
/*   Updated: 2023/05/08 17:51:12 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	get_digit(unsigned long n, int size)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		digit++;
	while (n != 0)
	{
		n /= size;
		digit++;
	}
	return (digit);
}

static char	*recursive(char *result, unsigned long n, char *base)
{
	if (n < 0)
	{
		n = -n;
		*result = '-';
		result++;
	}
	if (n >= (unsigned long)ft_strlen(base))
	{
		result = recursive(result, n / ft_strlen(base), base);
		result = recursive(result, n % ft_strlen(base), base);
	}
	else
	{
		*result = base[n % ft_strlen(base)];
		result++;
		*result = '\0';
	}
	return (result);
}

char	*ft_itoa_base(unsigned long n, char *base)
{
	char	*result;

	result = malloc((get_digit(n, ft_strlen(base)) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	recursive(result, n, base);
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned long	n = -549831893213;

	printf("%s\n",ft_itoa_base(n,"0123456789abcdef"));
	return (0);
}
*/
