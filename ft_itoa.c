/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:35:24 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/24 13:13:08 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_count(long n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count = 1;
		n = -n;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	num;

	num = n;
	i = ft_digit_count(num);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[i--] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
