/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:26:06 by eros-gir          #+#    #+#             */
/*   Updated: 2024/09/11 18:35:51 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libasm.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *src1 = "42";
	char *src2 = "libasm";
	char *src3 = "Hello, World!";
	char *src4 = "";

	// Test ft_strlen
	printf("-ft_strlen test:\n");
	printf("\tLength of '%s': %zu\n",src1, ft_strlen(src1));
	printf("\tLength of '%s': %zu\n",src2, ft_strlen(src2));
	printf("\tLength of '%s': %zu\n",src3, ft_strlen(src3));
	printf("\tLength of '%s': %zu\n",src4, ft_strlen(src4));
	printf("\n");

	// Test ft_strcpy

	// Allocate memory for destination strings
	char *dst1 = malloc(ft_strlen(src1) + 1);
	char *dst2 = malloc(ft_strlen(src2) + 1);
	char *dst3 = malloc(ft_strlen(src3) + 1);
	char *dst4 = malloc(ft_strlen(src4) + 1);

	if (!dst1 || !dst2 || !dst3 || !dst4) {
		printf("Memory allocation failed!\n");
		return 1;
	}

	printf("-ft_strcpy test:\n");
	printf("\tOriginal: '%s', Copied: '%s'\n", src1, ft_strcpy(dst1, src1));
	printf("\tOriginal: '%s', Copied: '%s'\n", src2, ft_strcpy(dst2, src2));
	printf("\tOriginal: '%s', Copied: '%s'\n", src3, ft_strcpy(dst3, src3));
	printf("\tOriginal: '%s', Copied: '%s'\n", src4, ft_strcpy(dst4, src4));
	printf("\n");

	free(dst1);
	free(dst2);
	free(dst3);
	free(dst4);

	//Test ft_strdup
	char *dup1 = ft_strdup(src1);
	char *dup2 = ft_strdup(src2);
	char *dup3 = ft_strdup(src3);

	printf("-ft_strdup test:\n");
	printf("\tOriginal: '%s', Copied: '%s'\n", src1, dup1);
	printf("\tOriginal: '%s', Copied: '%s'\n", src2, dup2);
	printf("\tOriginal: '%s', Copied: '%s'\n", src3, dup3);
	printf("\n");

	free(dup1);
	free(dup2);
	free(dup3);

	return 0;
}