/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:25:54 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/10 14:14:09 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while ((unsigned char) *s1 == (unsigned char) *s2
		&& *s1 != 0 && n-- > 1)
	{
		s1++;
		s2++;
	}
	if ((unsigned char) *s1 == (unsigned char) *s2)
		return (0);
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s1 = "Hello";
    char *s2 = "World";
    int result;

    result = ft_strncmp(s1, s2, 3);
    printf("ft_strncmp: %d\n", result);

    result = strncmp(s1, s2, 3);
    printf("strncmp:    %d\n", result);

    return 0;
}*/
