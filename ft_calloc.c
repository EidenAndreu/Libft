/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:20:55 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/10 13:21:01 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*int	main(void)
{
    int *arr;
    int i;

    arr = (int *)ft_calloc(5, sizeof(int));
    if (!arr)
        return (1);
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    return (0);
}*/
