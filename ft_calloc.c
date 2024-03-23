#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	ptr = (char *)malloc(size * n);
	if (!ptr)
		return (0);
	ft_bzero(ptr, n * size);
	return (ptr);
}
