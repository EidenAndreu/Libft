/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:16:21 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/10 13:16:28 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*a;
	char	*b;

	a = (char *)src;
	b = (char *)dest;
	if (a < b)
	{
		while (len--)
		{
			b[len] = a[len];
		}
	}
	else
	{
		ft_memcpy(b, a, len);
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "Hello World!";
    char str2[] = "Hello World!";
    char str3[] = "Hello World!";
    char str4[] = "Hello World!";

    // Using ft_memmove
    printf("Before ft_memmove: %s\n", str1);
    ft_memmove(str1 + 2, str1, 5);
    printf("After ft_memmove: %s\n", str1);

    // Using memmove from standard library
    printf("Before memmove: %s\n", str2);
    memmove(str2 + 2, str2, 5);
    printf("After memmove: %s\n", str2);

    // Using ft_memmove on overlapping memory ranges
    printf("Before ft_memmove (overlapping): %s\n", str3);
    ft_memmove(str3 + 2, str3 + 4, 5);
    printf("After ft_memmove (overlapping): %s\n", str3);

    // Using memmove from standard library on overlapping memory ranges
    printf("Before memmove (overlapping): %s\n", str4);
    memmove(str4 + 2, str4 + 4, 5);
    printf("After memmove (overlapping): %s\n", str4);

    return (0);
}*/
