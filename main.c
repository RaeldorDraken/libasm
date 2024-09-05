/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:26:06 by eros-gir          #+#    #+#             */
/*   Updated: 2024/09/05 13:03:17 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libasm.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char src1[] = "42";
	char src2[] = "libasm";
	char src3[] = "Hello, World!";
	char src4[] = "";
	
	// Allocate memory for destination strings
	char *dst1 = malloc(strlen(src1) + 1);
	char *dst2 = malloc(strlen(src2) + 1);
	char *dst3 = malloc(strlen(src3) + 1);
	char *dst4 = malloc(strlen(src4) + 1);

	if (!dst1 || !dst2 || !dst3 || !dst4) {
		printf("Memory allocation failed!\n");
		return 1;
	}

	printf("Length of '%s': %zu\n",src1, ft_strlen(src1));
	printf("Length of '%s': %zu\n",src2, ft_strlen(src2));
	printf("Length of '%s': %zu\n",src3, ft_strlen(src3));
	printf("Length of '%s': %zu\n",src4, ft_strlen(src4));

	// Test ft_strcpy
	printf("Original: '%s', Copied: '%s'\n", src1, ft_strcpy(dst1, src1));
	printf("Original: '%s', Copied: '%s'\n", src2, ft_strcpy(dst2, src2));
	printf("Original: '%s', Copied: '%s'\n", src3, ft_strcpy(dst3, src3));
	printf("Original: '%s', Copied: '%s'\n", src4, ft_strcpy(dst4, src4));

	free(dst1);
	free(dst2);
	free(dst3);
	free(dst4);

	return 0;
}