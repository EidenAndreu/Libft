/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:20:05 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/10 14:48:10 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	num;
	int				i;
	int				np;

	np = 1;
	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			np = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(np * num));
}

/*#include <stdio.h>

int main()
{
    char *str1 = "12345";
    char *str2 = "-54321";
    char *str3 = "  123";
    char *str4 = "  -1234abc";
    char *str5 = "+1234";
    char *str6 = "  + 123 456";

    printf("ft_atoi(\"%s\"): %d\n", str1, ft_atoi(str1));
    printf("ft_atoi(\"%s\"): %d\n", str2, ft_atoi(str2));
    printf("ft_atoi(\"%s\"): %d\n", str3, ft_atoi(str3));
    printf("ft_atoi(\"%s\"): %d\n", str4, ft_atoi(str4));
    printf("ft_atoi(\"%s\"): %d\n", str5, ft_atoi(str5));
    printf("ft_atoi(\"%s\"): %d\n", str6, ft_atoi(str6));

    return 0;
}*/
