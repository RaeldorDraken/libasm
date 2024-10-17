/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:17:00 by eros-gir          #+#    #+#             */
/*   Updated: 2024/10/17 12:09:33 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libasm_bonus.h"
#include<stdio.h>

int main()
{
	const char *test1 = "   -42";
	const char *base1 = "0123456789";
	
	const char *test2 = "42";
	const char *base2 = "0123456789";

	const char *test3 = "1A";
	const char *base3 = "0123456789ABCDEF";

	const char *test4 = "  +2B";
	const char *base4 = "0123456789ABCDEF";

	printf("ft_atoi_base(%s, %s) = %d\n", test1, base1, ft_atoi_base(test1, base1));
	printf("ft_atoi_base(%s, %s) = %d\n", test2, base2, ft_atoi_base(test2, base2));
	printf("ft_atoi_base(%s, %s) = %d\n", test3, base3, ft_atoi_base(test3, base3));
	printf("ft_atoi_base(%s, %s) = %d\n", test4, base4, ft_atoi_base(test4, base4));

	return 0;
}