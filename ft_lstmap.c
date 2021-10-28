#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	**first_node;

	if (!lst || !f)
		return (NULL);
	first_node = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(first_node, del);
			return (NULL);
		}
		if (!first_node)
		{
			first_node = &new_node;
		}
		ft_lstadd_back(first_node, new_node);
		lst = lst->next;
	}
	return (*first_node);
}
