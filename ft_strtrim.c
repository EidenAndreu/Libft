/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 21:37:05 by ereinald          #+#    #+#             */
/*   Updated: 2023/05/24 13:08:31 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	is_set_char(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static size_t	get_trimmed_start(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && is_set_char(s1[start], set))
		start++;
	return (start);
}

static size_t	get_trimmed_end(char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(s1);
	while (end > 0 && is_set_char(s1[end - 1], set))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = get_trimmed_start(s1, set);
	end = get_trimmed_end(s1, set);
	if (start >= end)
	{
		str = (char *)malloc(sizeof(char));
		if (!str)
			return (NULL);
		*str = '\0';
	}
	else
	{
		len = end - start;
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (!str)
			return (NULL);
		ft_strlcpy(str, &s1[start], len + 1);
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
