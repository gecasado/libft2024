#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*sr1;
	unsigned char	*sr2;

	sr1 = (unsigned char*)s1;
	sr2 = (unsigned char*)s2;
	i = 0;
	while (n > 0)
	{
		if (sr1[i] != sr2[i])
			return (sr1[i] - sr2[i]);
		n--;
		i++;
	}
	return (0);
}
