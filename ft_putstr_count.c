/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprivite <sprivite@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:19:33 by sprivite          #+#    #+#             */
/*   Updated: 2024/01/30 17:19:39 by sprivite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_count(char *str, int *count)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar_count(str[i], count);
		i++;
	}
}