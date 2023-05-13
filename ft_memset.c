/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:00:20 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/10 12:00:28 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*a;

	a = (char *)b;
	while (len > 0)
	{
		*a++ = (char)c;
		len--;
	}
	return (b);
}

/*#include <stdio.h>
int	main(void)
{
	char str[] = "Hello World!";
    int num[] = {1, 2, 3, 4, 5};
   // size_t str_len = sizeof(str);
    size_t num_len = sizeof(num) / sizeof(num[0]);

    printf("Antes de usar ft_memset:\n");
    printf("str = %s\n", str);
    for (size_t i = 0; i < num_len; i++)
        printf("%d ", num[i]);
    printf("\n");

    ft_memset(str, '*', 12);
    ft_memset(num, 0, num_len * sizeof(int));

    printf("Después de usar ft_memset:\n");
    printf("str = %s\n", str);
    for (size_t i = 0; i < num_len; i++)
        printf("%d ", num[i]);
    printf("\n");

    return 0;
}*/
