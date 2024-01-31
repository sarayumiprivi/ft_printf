/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprivite <sprivite@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:19:15 by sprivite          #+#    #+#             */
/*   Updated: 2024/01/30 17:19:18 by sprivite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_accepted_conv(int c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' 
	|| c == 'i' || c == 'u'|| c == 'x' 
	|| c == 'X' || c == '%') 
		return (1);
	else
		return 0;
}

int	is_accepted_flag(int c)
{
	if (c == '-' || c == ' ' || c == '0' || c == '#' 
	|| c == '+')
		return (1);
	else
		return 0;
}

int is_signed(int c, t_format fmt)
{
    if ((c < 0 || ft_strchr(fmt.flags, '+')) 
	&& (fmt.conversion == 'd' || fmt.conversion == 'i'))
        return (1);
    else
        return (0);
}

int need_space(int c, t_format fmt)
{
	if (fmt.conversion == 'x' || fmt.conversion == 'X' && ft_strchr(fmt.flags, '#'))
		return (2);
    if (is_signed(c, fmt))
        return (1);
    else if (ft_strchr(fmt.flags, ' ')
	&& (fmt.conversion == 'd' || fmt.conversion == 'i'))
        return (1);
    else
        return (0);

}