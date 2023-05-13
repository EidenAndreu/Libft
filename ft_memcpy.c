/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:15:09 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/10 14:01:58 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*a;
	char	*b;

	a = (char *)src;
	b = (char *)dest;
	if (!dest && !src)
		return (NULL);
	if (a < b && a + n > b)
	{
		ft_memmove(dest, src, n);
	}
	while (n--)
	{
		*b++ = *a++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

#define STR_SIZE 13

int	main(void)
{
	char	src[STR_SIZE] = "Hello World!";
	char	dest[STR_SIZE] = "";
	char	*std_result;
	char	*ft_result;

	// Imprime el contenido del array antes de utilizar ft_memcpy
	printf("Antes de utilizar ft_memcpy:\n");
	printf("src = %s\n", src);
	printf("dest = %s\n", dest);

	// Copia src en dest utilizando la función ft_memcpy
	ft_memcpy(dest, src, STR_SIZE);

	// Imprime el contenido del array después de utilizar ft_memcpy
	printf("Después de utilizar ft_memcpy:\n");
	printf("src = %s\n", src);
	printf("dest = %s\n", dest);

	// Compara el resultado de ft_memcpy con el de memcpy de la biblioteca de C
	std_result = memcpy(dest, src, STR_SIZE);
	ft_result = ft_memcpy(dest, src, STR_SIZE);
	if (memcmp(std_result, ft_result, STR_SIZE) == 0)
		printf("ft_memcpy funciona correctamente\n");
	else
		printf("ft_memcpy no funciona correctamente\n");

}*/
