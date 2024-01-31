/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprivite <sprivite@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:07:00 by sprivite          #+#    #+#             */
/*   Updated: 2024/01/30 16:03:47 by sprivite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int ft_printf(const char *str, ...)
{
	va_list	*ap;
	int	result;

	result = 0;
	va_start(*ap, str);
	
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			result = ft_check(*str, ap);
		}
		else
		{
			result += write (1, str, 1);
			str++;
		}
	}
	return result;
}
