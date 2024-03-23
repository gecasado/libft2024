#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (!(s = (char*)malloc(sizeof(*s) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (0);
	while (*s1)
		s[i++] = *s1++;
	while (*s2)
		s[i++] = *s2++;
	s[i] = 0;
	return (s);
}
