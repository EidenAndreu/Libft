/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:16:54 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/10 14:02:14 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	int				counter;

	counter = (unsigned int)ft_strlen(src);
	if (!dstsize)
		return (counter);
	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (counter);
}

/*int	main(void)
{
	char src[] = "Hello World!";
	char dst[6];
	size_t src_len = ft_strlen(src);
	size_t dst_len = sizeof(dst);

	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
	printf("length of src: %zu\n", src_len);
	printf("length of dst: %zu\n", dst_len);

	size_t ret_len = ft_strlcpy(dst, src, dst_len);

	printf("length returned by ft_strlcpy: %zu\n", ret_len);
	printf("src: %s\n", src);
	printf("dst: %s\n", dst);

	return (0);
}*/
