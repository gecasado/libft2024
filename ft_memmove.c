#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *s;
	char *d;

	s = (char*)src;
	d = (char*)dst;
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
		return (ft_memcpy(dst, src, n));
	return ((void*)dst);
}
