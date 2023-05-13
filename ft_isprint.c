/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:32:49 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/10 11:34:18 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_isprint('a'));
	printf("%d", ft_isprint('\n'));
	printf("%d", ft_isprint(' '));
}*/
