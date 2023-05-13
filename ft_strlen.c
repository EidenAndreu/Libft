/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:34:41 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/10 11:34:50 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++ != 0)
		i++;
	return (i);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%zu\n", ft_strlen("256"));
	printf("%zu\n", ft_strlen("Hello World"));
	printf("%zu\n", ft_strlen("3"));
	return (0);
}*/
