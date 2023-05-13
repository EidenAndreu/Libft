/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:00:39 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/10 13:14:55 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*clean;

	clean = s;
	while (n-- != 0)
	{
		*clean++ = 0;
	}
}

/*#include <stdio.h>

int	main(void)
{
	char str[] = "Hello World!";
	size_t str_len = sizeof(str);

	printf("Antes de utilizar ft_bzero:\n");
	printf("str = %s\n", str);
	for (size_t i = 0; i < str_len; i++)
		printf("%d ", str[i]);
	printf("\n");

	ft_bzero(str, str_len);

	printf("Después de utilizar ft_bzero:\n");
	printf("str = %s\n", str);
	for (size_t i = 0; i < str_len; i++)
		printf("%d ", str[i]);
	printf("\n");

	return (0);
}*/
