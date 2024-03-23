#include "libft.h"

int ft_sing(int nbr)
{
	if(nbr > 0)
		return(0);
	else
		return(1);
}
long ft_invert(int nbr)
{
	long n;
	n = nbr;
	if(n < 0)
		return(-n);
	else
		return (n);
}
char		*ft_itoa(int nbr)
{
	long	n;
	size_t	len;
	char	*str;

	len = ft_sing(nbr);
	n = ft_invert(nbr);
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	*(str + len--) = '\0';
	while (n > 0)
	{
		*(str + len--) = n % 10 + '0';
		n /= 10;
	}
	if (len == 0 && str[1] == '\0')
		*(str + len) = '0';
	if (len == 0 && str[1] != '\0')
		*(str + len) = '-';
	return (str);
}
