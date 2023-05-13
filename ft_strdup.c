/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:21:15 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/10 14:47:51 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, len);
	str[len] = '\0';
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char *str = "Hello, world!";
	char *str_copy;

	str_copy = ft_strdup(str);
	if (str_copy == NULL)
	{
		printf("Error: ft_strdup failed to allocate memory.\n");
		return (1);
	}
	printf("str_copy: %s\n", str_copy);
	free(str_copy);
	return (0);
}*/
