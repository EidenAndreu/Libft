/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:17:46 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/10 13:17:53 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c -32);
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c = 'a';
    printf("Before ft_toupper: %c\n", c);
    printf("After ft_toupper: %c\n", ft_toupper(c));
    printf("Expected result: %c\n", toupper(c));
    return 0;
}*/
