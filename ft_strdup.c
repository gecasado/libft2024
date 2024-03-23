#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		slen;

	slen = ft_strlen(s) + 1;
	if ((str = malloc(slen)))
	{
		ft_strlcpy(str, s, slen);
		return (str);
	}
	return (NULL);
}
