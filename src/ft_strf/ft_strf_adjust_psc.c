/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strf_adjust_pfsc.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharla <kcharla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 15:12:34 by kcharla           #+#    #+#             */
/*   Updated: 2020/08/12 22:07:00 by kcharla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strf.h"

/*
** adjustment functions for 'text' flags
*/

void		ft_strf_adjust_p(t_strflags *flags)
{
	if (flags == NULL)
		return ;
	flags->zero = 0;
	flags->sharp = 0;
	flags->space = 0;
	flags->plus = 0;
}

void		ft_strf_adjust_s(t_strflags *flags)
{
	if (flags == NULL)
		return ;
	flags->num_sign = 0;
	flags->sharp = 0;
	flags->plus = 0;
	flags->space = 0;
}

void		ft_strf_adjust_c(t_strflags *flags)
{
	if (flags == NULL)
		return ;
	flags->sharp = 0;
	flags->plus = 0;
	flags->space = 0;
	flags->precision = FT_PRECISION_DEFAULT;
	flags->width = (flags->width <= 0) ? 1 : flags->width;
}

void		ft_strf_adjust_perc(t_strflags *flags)
{
	if (flags == NULL)
		return ;
	flags->sharp = 0;
	flags->plus = 0;
	flags->space = 0;
	flags->precision = FT_PRECISION_DEFAULT;
	flags->num_sign = 0;
}
