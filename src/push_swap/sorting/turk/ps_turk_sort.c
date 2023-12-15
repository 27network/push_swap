/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_turk_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <oss@xtrm.me>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:05:12 by kiroussa          #+#    #+#             */
/*   Updated: 2023/12/15 21:05:02 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ps/sort.h>

void	ps_turk_stage1(t_stack *a, t_stack *b, t_list **list);
void	ps_turk_stage2(t_stack *a, t_stack *b, t_list **list);

t_list	*ps_turk_sort(t_stack *a, t_stack *b)
{
	t_list	*list;

	list = NULL;
	ps_wrap_exec(PB, a, b, &list);
	ps_wrap_exec(PB, a, b, &list);
	ps_turk_stage1(a, b, &list);
	ps_turk_stage2(a, b, &list);
	ps_stack_free(&a);
	ps_stack_free(&b);
	return (list);
}
