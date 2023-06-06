/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 08:10:41 by amanjon-          #+#    #+#             */
/*   Updated: 2023/05/22 08:03:32 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}


/* int	main(void)
{	
	t_list *node;

	node = ft_lstnew("hola");
	
	ft_lstadd_front(&node, ft_lstnew("adios"));
	while (node)
    {
        printf("%s\n", (char*)node->content);
        node = node->next;
    }
	return (0);
} */

/* Descripción Añade el nodo ’new’ al principio de la lista ’lst’. */
/* El nuevo nodo pasa a apuntar al nodo que antes era el primero de la lista.
Se modifica el valor del puntero del primer nodo para que apunte al nuevo nodo  */