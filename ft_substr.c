#include "libft.h"

char	*ft_substr(char const *s, unsigned int star, size_t len)
{
	size_t	count;
	size_t	size;
	char	*tab;

	count = 0;
	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < star)
		return (ft_strdup(""));
	size = ft_strlen(s + star);
	if (size < len)
		len = size;
	if (!(tab = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (count < len)
	{
		tab[count] = s[star + count];
		count++;
	}
	tab[count] = '\0';
	return (tab);
}
