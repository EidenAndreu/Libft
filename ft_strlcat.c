/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:17:20 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/10 13:17:31 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	total;
	size_t	origin;

	origin = size;
	total = ft_strlen(dest) + ft_strlen(src);
	while (*dest != 0 && size > 0)
	{
		dest++;
		size--;
	}
	if (size == 0)
		return (ft_strlen(src) + origin);
	while (*src != 0 && size > 1)
	{
		*dest++ = *src++;
		size--;
	}
	*dest = 0;
	return (total);
}

/*#include <stdio.h>

int	main(void)
{
	char str[6] = "Hello";
	const char *suffix = " World!";

	printf("Before ft_strlcat: %s\n", str);
	size_t ret = ft_strlcat(str, suffix, sizeof(str));
	printf("Return value: %zu\n", ret);
	printf("After ft_strlcat: %s\n", str);

	return (0);
}*/
