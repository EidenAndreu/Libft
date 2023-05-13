/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:18:59 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/10 13:19:10 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	while (n-- > 0)
	{
		str = (unsigned char *)s;
		if (*str == (unsigned char)c)
			return ((void *)str);
		s++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Hello, world!";
    char ch = 'o';
    size_t n = strlen(str);

    void *ret1 = ft_memchr(str, ch, n);
    void *ret2 = memchr(str, ch, n);

    printf("ft_memchr: %s\n", (char *)ret1);
    printf("memchr:    %s\n", (char *)ret2);

    return 0;
}*/
