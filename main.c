/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:26:06 by eros-gir          #+#    #+#             */
/*   Updated: 2024/08/31 17:12:24 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libasm.h"
#include<stdio.h>

int main()
{
    printf("Length of '42': %zu\n", ft_strlen("42"));
    printf("Length of 'libasm': %zu\n", ft_strlen("libasm"));
    printf("Length of 'Hello, World!': %zu\n", ft_strlen("Hello, World!"));
    printf("Length of '': %zu\n", ft_strlen("")); // Test with an empty string
    return 0;
}