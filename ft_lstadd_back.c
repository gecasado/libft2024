#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	ft_lstlast(*alst)->next = new;
}
