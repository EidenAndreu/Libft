/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:19:21 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/10 13:19:27 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*st1 == *st2 && n-- > 0)
	{
		st1++;
		st2++;
		if (n == 0)
			return (0);
	}
	if (*st1 != *st2)
		return (*st1 - *st2);
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Hola";
    char s2[] = "hola";
    size_t n = 4;

    int result1 = ft_memcmp(s1, s2, n);
    int result2 = memcmp(s1, s2, n);

    printf("ft_memcmp: %d\n", result1);
    printf("memcmp:    %d\n", result2);

    return 0;
}*/
