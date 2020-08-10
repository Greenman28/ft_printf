/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharla <kcharla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 17:52:05 by kcharla           #+#    #+#             */
/*   Updated: 2020/08/10 16:27:30 by kcharla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** #define STR "%15.f|%15.1f|%15.2f|%15.5f|%15.12f"
** #define ARGS 999.99999, 999.99999, 999.99999, 999.99999, 999.99999
** -------------
** #define STR "|%.19f|%.19f|"
** #define ARGS 1.025978542436587568678, -1.025978542436587568678
**
** printf("gg_printf: \'"STR"\'\n", ARGS);
*/

#include "ft_printf.h"
#include <stdio.h>
#include <math.h>
#include <limits.h>

#define STR "|%-.8f|"
#define ARGS -1245.02 * 10000000000L * 1000000000000L * 200000000000000L

int		main(void)
{
	{
		ft_printf("ft_printf: \'"STR"\'\n", ARGS);
		printf("gg_printf: \'"STR"\'\n", ARGS);
	}
	return (0);
}
