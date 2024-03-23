#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int count;

	if (!src || !dst)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	count = 0;
	while (size > 1 && *src)
	{
		*dst = *src;
		++dst;
		++src;
		--size;
		++count;
	}
	*dst = '\0';
	while (*dst || *src)
	{
		if (*src)
		{
			++src;
			++count;
		}
	}
	return (count);
}
