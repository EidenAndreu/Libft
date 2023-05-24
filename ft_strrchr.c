/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:30:37 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/10 11:31:01 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	pos;

	pos = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + pos);
	while (pos >= 0)
	{
		if (s[pos] == (char)c)
			return ((char *) &s[pos]);
		pos--;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "Hello, world!";
	char *res1 = ft_strrchr(str, 'w');
	char *res2 = strrchr(str, 'w');

	printf("ft_strrchr: %s\n", res1);
	printf("strrchr:    %s\n", res2);

	return (0);
}*/
