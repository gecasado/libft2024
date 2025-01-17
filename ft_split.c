#include "libft.h"

int
	wordcount(char *s, char c)
{
	int	count;

	count = 0;
	if (*s == '\0')
		return (0);
	s++;
	if (*s == '\0' && *(s - 1) != c)
		return (1);
	while (*s)
	{
		if (*(s - 1) != c && *s == c)
			count++;
		s++;
	}
	if (*(s - 1) != c)
		count++;
	return (count);
}

int
	wordlen(char *s, char c)
{
	int	count;

	count = 0;
	while (*s != '\0' && *s != c)
	{
		count++;
		s++;
	}
	return (count);
}

int
	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

static char
	**splitter(char const *s, char c)
{
	int		i;
	int		j;
	char	**t;

	i = 0;
	if (!(t = (char**)malloc(sizeof(char*) * (wordcount((char*)s, c) + 1))))
		return (NULL);
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		j = 0;
		if (!(t[i] = (char*)malloc((wordlen((char*)s, c) + 1))))
			return (NULL);
		while (*s != c && *s != '\0')
		{
			t[i][j] = *s;
			j++;
			s++;
		}
		t[i][j] = '\0';
		i++;
	}
	t[i] = NULL;
	return (t);
}

char
	**ft_split(char const *s, char c)
{
	char	*trimmed;
	char	totrim[2];
	char	**t;

	if (!s)
		return (NULL);
	if (ft_strcmp(s, "") == 0)
	{
		if (!(t = malloc(sizeof(char*))))
			return (NULL);
		*t = NULL;
		return (t);
	}
	totrim[0] = c;
	totrim[1] = '\0';
	if (!(trimmed = ft_strtrim(s, totrim)))
		return (NULL);
	if (!(t = splitter(trimmed, c)))
		return (NULL);
	free(trimmed);
	return (t);
}
