/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 21:37:05 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/15 10:52:36 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (j > i && ft_strchr(set, s1[j - 1]))
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 1);
		else
		{
			str = (char *)malloc(1);
			if (str)
				*str = '\0';
		}
	}
	return (str);
}

/*#include <stdio.h>

int main(void)
{
    char *str = "  \t  Hola, mundo! \n  ";
    char *set = " \t\n";

    printf("Antes de trim: \"%s\"\n", str);
    char *trimmed_str = ft_strtrim(str, set);
    printf("Después de trim: \"%s\"\n", trimmed_str);
    free(trimmed_str);

    return 0;
}*/
