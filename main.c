/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:26:06 by eros-gir          #+#    #+#             */
/*   Updated: 2024/10/26 16:01:34 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libasm.h"
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	ft_write(1, "--------------------------------\n",33);
	ft_write(1, "----LIBASM PROJECT MANDATORY----\n",33);
	ft_write(1, "--------------------------------\n\n",34);
	char *src1 = "42";
	char *src2 = "libasm";
	char *src3 = "Hello, World!";
	char *src4 = "";

	// Test ft_strlen
	ft_write(1, "-----Testing ft_strlen-----\n", 28);
	printf("\tLength of '%s': %zu\n",src1, ft_strlen(src1));
	printf("\tLength of '%s': %zu\n",src2, ft_strlen(src2));
	printf("\tLength of '%s': %zu\n",src3, ft_strlen(src3));
	printf("\tLength of '%s': %zu\n",src4, ft_strlen(src4));
	ft_write(1, "\n", 1);

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

	ft_write(1, "-----Testing ft_strcpy-----\n", 28);
	printf("\tOriginal: '%s', Copied: '%s'\n", src1, ft_strcpy(dst1, src1));
	printf("\tOriginal: '%s', Copied: '%s'\n", src2, ft_strcpy(dst2, src2));
	printf("\tOriginal: '%s', Copied: '%s'\n", src3, ft_strcpy(dst3, src3));
	printf("\tOriginal: '%s', Copied: '%s'\n", src4, ft_strcpy(dst4, src4));
	ft_write(1, "\n", 1);

	free(dst1);
	free(dst2);
	free(dst3);
	free(dst4);

	//Test ft_strdup
	char *dup1 = ft_strdup(src1);
	char *dup2 = ft_strdup(src2);
	char *dup3 = ft_strdup(src3);

	ft_write(1, "-----Testing ft_strdup-----\n", 28);
	printf("\tOriginal: '%s', Duplicated: '%s'\n", src1, dup1);
	printf("\tOriginal: '%s', Duplicated: '%s'\n", src2, dup2);
	printf("\tOriginal: '%s', Duplicated: '%s'\n", src3, dup3);
	ft_write(1, "\n", 1);

	free(dup1);
	free(dup2);
	free(dup3);

	//Test ft_strcmp
	ft_write(1, "-----Testing ft_strcmp-----\n", 28);
	printf("\tCompare 'hello' and 'hello': %d\n", ft_strcmp("hello", "hello"));
	printf("\tCompare '42' and '43': %d\n", ft_strcmp("42", "43"));
	printf("\tCompare 'abc' and 'abcd': %d\n", ft_strcmp("abc", "abcd"));
	printf("\tCompare 'apple' and 'apricot': %d\n", ft_strcmp("apple", "apricot"));
	ft_write(1, "\n", 1);

	//Test ft_write
	ft_write(1, "-----Testing ft_write-----\n", 27);
	char	*str = "\'Testing stdout return\'\n";
	int		ret = ft_write(1, str, 24);
	printf("\tBytes written: %d\n", ret);
	str = "\'Testing stderr return\'\n";
	ret = ft_write(2, str, 24);
	printf("\tBytes written: %d\n", ret);
	ft_write(1, "\n", 1);
	
	//Test ft_read
	ft_write(1, "-----Testing ft_read-----\n", 26);
	str = "\tInput text next:\n";
	ft_write(1, str, 18);
	char	buff[100];
	int		flag = ft_read(0, buff, 100);

	if (flag >= 0)
	{
		buff[flag] = '\0';
		printf("\tRead %d bytes: %s\n", flag, buff);
	}
	else
	{
		perror("ft_read failed");
	}
	ft_write(1, "-----END OF TESTING-----\n", 25);

	return 0;
}