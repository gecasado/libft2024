#include"libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	signo;
	int	num;
	
	num = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] < 14 && str[i] > 8))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	if (signo == 1)
		num = num * -1;
	return (num);
}
