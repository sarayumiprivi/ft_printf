/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprivite <sprivite@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:09:06 by sprivite          #+#    #+#             */
/*   Updated: 2024/01/31 11:25:30 by sprivite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdarg.h>
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include "libft/libft.h"
typedef struct s_format
{
	char	*flags;
	int	width;
	int	precision;
	int	pflag;
	char	conversion;
} t_format;

int		ft_printf(const char *str, ...);
char		*get_format(const char* str);
t_format	read_format(char *format);
int		is_accepted_flag(int c);
int		is_accepted_conv(int c);
int		is_signed(int c, t_format fmt);
int		need_space(int c, t_format ftm);
char		*str_c(t_format format, int c);
char		*str_perc(t_format format);
char		*str_s(t_format format, char *str);
void		ft_putstr_count(char *str, int *count);
char		*str_ptrnum(t_format format, void *ptr);
char		*str_num(t_format format, int num);
char		*str_hexnum(t_format format, int num);
int		countd(long int num, int base);
void		ft_putchar_count(char c, int *count);

#endif