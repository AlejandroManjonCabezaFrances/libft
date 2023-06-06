/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:29:36 by amanjon-          #+#    #+#             */
/*   Updated: 2023/05/22 11:11:52 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	aux = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	else
	{
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = new;
	}
}

/* int	main(void)
{
	t_list *lst;
	t_list *new;

	lst = ft_lstnew("hola");
	new = ft_lstnew("adios");
	ft_lstadd_back(&lst, new);
	while (lst)
	{
		printf("%d\n", lst->content);
		lst = lst->next;
	}
	return (0);
} */

/* Descripción Añade el nodo ’new’ al final de la lista ’lst’. */
