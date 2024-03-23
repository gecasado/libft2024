#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	if (*little == '\0')
		return ((char*)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		if (big[i] == little[j] && (i + ft_strlen(little)) <= len)
		{
			while (little[j] == big[i + j] && little[j] != '\0')
				j++;
			if (j == ft_strlen(little))
				return ((char*)&(big[i]));
		}
		i++;
	}
	return (NULL);
}
