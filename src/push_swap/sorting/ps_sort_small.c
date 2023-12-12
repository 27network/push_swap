/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <oss@xtrm.me>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 00:28:23 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/12 20:07:11 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ps/insn.h>
#include <ps/sort.h>

static void	ps_wrap_exec(t_insn insn, t_stack *a, t_stack *b, t_list **feedback)
{
	ps_insn_exec(insn, a, b);
	(void)feedback;
}

static void	ps_sort_size3(t_stack *a)
{
	(void)a;
}

t_list	*ps_sort_smol(t_stack *a, t_stack *b)
{
	t_list	*list;

	list = NULL;
	if (a->size == 2)
		if (a->values[0] < a->values[1])
			ps_wrap_exec(SA, a, b, &list);
	if (a->size == 3)
		ps_sort_size3(a);
	if (a->size == 4)
	{
	}
	if (a->size == 5)
	{
	}
	return (list);
}
