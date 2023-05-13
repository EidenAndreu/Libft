/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:20:59 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/13 21:16:37 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;

	res = (char *)malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	if (!res)
		return (NULL);
	i = 0;
	if (start < ft_strlen(str))
	{
		while (i < len && str[i + start] != '\0')
		{
			res[i] = str[i + start];
			i++;
		}
	}
	res[i] = '\0';
	return (res);
}

/* #include <stdio.h>
int main(void)
{
    char *str = "Hello, world!";
    char *sub = ft_substr(str, 0, 5);
    printf("%s\n", sub); // Output: "Hello"
    free(sub);
    return 0;
}*/
