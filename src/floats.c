///* ************************************************************************** */
///*                                                                            */
///*                                                        :::      ::::::::   */
///*   floats.c                                           :+:      :+:    :+:   */
///*                                                    +:+ +:+         +:+     */
///*   By: kcharla <kcharla@student.42.fr>            +#+  +:+       +#+        */
///*                                                +#+#+#+#+#+   +#+           */
///*   Created: 2019/11/25 14:40:37 by kcharla           #+#    #+#             */
///*   Updated: 2019/11/28 18:31:21 by kcharla          ###   ########.fr       */
///*                                                                            */
///* ************************************************************************** */
//
///*
//** Flags used in floats
//*/
//
//#define f_or_F          1
//#define l_or_L          2
//#define padding_l_or_r  3
//#define field_width     4
//#define presision_one   5
//#define presision_two   6
//
//#define flags_num       7
////
////#include <stdio.h>
//#include "printf.h"
////
////char	*ft_float(char *flags_str, double num)
////{
////	int		flags[flags_num];
////
////	double zero = 0.0;
////	(void)flags_str;
////	flags[f_or_F] = 1;
////	printf("%f\n", num - zero);
////	printf("%d\n", (((int)num) % 10));
////	//flags = get_flags(flags_str, &flags);
////	return ((char *) 0);
////}
////
/////*
////** rounds num value by pres digits precision after decimal point.
////*/
////
//int		get_exponent(double num)
//{
//	int					exp;
//	//unsigned long long	raw;
//
//	exp = 0;
//	ft_memcpy(&num, &exp, 2);
//	return (exp);
//}
////
////float	round_prec(double num, int prec)
////{
////	float helper;
////
////	helper = 1 / 10;
////	return 1.1;
////}
////
//
//static int		before_dot_to_str()
//{
//
//}
//
//int main()
//{
//	//printf("\'%s\'", ft_str_div_by_ins("1234567890", 2, "-"));
////	char ** divs_b = str_divide_by("1234567890", 2);
////	int j = 0;
////	while (divs_b[j] != 0)
////	{
////		printf("%s\n", divs_b[j]);
////		j++;
////	}
////
////	char ** divs = str_divide_by("1234567890", 3);
////	int i = 0;
////	while (divs[i] != 0)
////	{
////		printf("%s\n", divs[i]);
////		i++;
////	}
////
////	divs = str_divide_by("1234567890", 4);
////	i = 0;
////	while (divs[i] != 0)
////	{
////		printf("%s\n", divs[i]);
////		i++;
////	}
//	double num = 228;
////
//	printf("exponent of %f = %d, %016x\n\n", num, 5, get_exponent(num));
//	unsigned long long a = 0x3ff0000000000000;
//
//	ft_memcpy(&num, &a, 8);
//
//	char * stb1 = ft_mtob(&num, sizeof(double));
//	char * st1 = ft_str_div_by_ins(stb1, 4, " ");
//	char * st21 = ft_str_div_by_ins(st1, 10, "   ");
//
//	ft_putendl(st21);
//
//	num = -234567654.485784;
//	long uli = (long) num;
//	printf("\nnum = \'%f\'\nuli = \'%ld\'\n", num, uli);
//
//
//	//print_bits(sizeof(num), &num);
////	while (num < 10)
////	{
////		char * stb = ft_mtob(&num, sizeof(double));
////		//char ** divs =  ft_str_div_by(stb, 4);
////
//////		int i = 0;
//////		while(divs[i] != 0)
//////		{
//////			ft_putendl(divs[i]);
//////			i++;
//////		}
////
////		char * st = ft_str_div_by_ins(stb, 4, " ");
////		char * st2 = ft_str_div_by_ins(st, 10, "   ");
////		ft_putendl(st2);
////		ft_putendl("");
////		free(stb);
////		free(st);
////		num++;
////	}
//
//	//ft_putendl(ft_mtob(&num, sizeof(double)));
////	char b = 1;
////	int c = 1025;
////	ft_putendl(ft_mtob(&c, sizeof(int)));
////	ft_putendl(ft_mtob(&b, sizeof(char)));
////	ft_putendl(ft_mtob(&c, sizeof(int)));
//	//printf("double as hex of %032llo\n", a);
//
//	//ft_float("%f", 1.1);
//	//printf("\'%s\'", ft_float("%f", 1.1));
//}