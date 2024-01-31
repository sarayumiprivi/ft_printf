/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprivite <sprivite@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:17:41 by sprivite          #+#    #+#             */
/*   Updated: 2024/01/30 17:17:52 by sprivite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	countd(long int num, int base)
{
	int	count;

	count = 1;
	while(num / base != 0)
	{
		count++;
		num = num / base;
	}
	return (count);
}