/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strf_flag_cast.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharla <kcharla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 14:05:04 by kcharla           #+#    #+#             */
/*   Updated: 2020/08/11 07:44:52 by kcharla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strf.h"

int			ft_strf_cast_flag_ull(t_uintmax *d, t_strflags *flags, va_list arg)
{
	if (flags == NULL || d == NULL)
		return (-1);
	if (flags->cast == CAST_NO)
		*d = (unsigned int)va_arg(arg, unsigned int);
	else if (flags->cast == CAST_HH)
		*d = (unsigned char)va_arg(arg, unsigned int);
	else if (flags->cast == CAST_H)
		*d = (unsigned short)va_arg(arg, unsigned int);
	else if (flags->cast == CAST_L)
		*d = va_arg(arg, unsigned long);
	else if (flags->cast == CAST_LL)
		*d = va_arg(arg, unsigned long long);
	else if (flags->cast == CAST_J)
		*d = va_arg(arg, t_uintmax);
	else if (flags->cast == CAST_Z)
		*d = va_arg(arg, size_t);
	else if (flags->cast == CAST_T)
		*d = va_arg(arg, intptr_t);
	else
		return (-1);
	return (0);
}

int			ft_strf_cast_flag_lli(t_intmax *d, t_strflags *flags, va_list arg)
{
	if (flags == NULL || d == NULL)
		return (-1);
	if (flags->cast == CAST_NO)
		*d = va_arg(arg, int);
	else if (flags->cast == CAST_HH)
		*d = (char)va_arg(arg, int);
	else if (flags->cast == CAST_H)
		*d = (short)va_arg(arg, int);
	else if (flags->cast == CAST_L)
		*d = va_arg(arg, long int);
	else if (flags->cast == CAST_LL)
		*d = va_arg(arg, long long int);
	else if (flags->cast == CAST_J)
		*d = va_arg(arg, t_intmax);
	else if (flags->cast == CAST_Z)
	{
		*d = (t_intmax)va_arg(arg, long int);
	}
	else if (flags->cast == CAST_T)
		*d = va_arg(arg, intptr_t);
	else
		return (-1);
	return (0);
}
