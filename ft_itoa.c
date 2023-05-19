#include "libft.h"
#include <limits.h>

static int	ft_digit_count(long int i)
{
	int	count;

	count = 0;
	if (i < 0)
	{
		i *= -1;
		count++;
	}
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;

/*	if (n == INT_MIN)
	{
		str = (char *)malloc(12 * sizeof(char));
		if (!str)
			return (NULL);
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
*/	i = ft_digit_count(n);
	str = malloc(i * sizeof(char) + 1);
	if (!str)
		return (0);
	str[i--] = 0;
	if (n == 0)
	{
		str = ft_calloc(2, sizeof(char));
		str[0] = 48;
	}
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i--] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
