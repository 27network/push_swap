/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_bottom.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <oss@xtrm.me>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 04:07:57 by kiroussa          #+#    #+#             */
/*   Updated: 2023/11/18 04:08:01 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ps/stack.h>

int	ps_stack_bottom(t_stack *stack)
{
	if (ps_stack_is_empty(stack))
		return (0);
	return (stack->values[0]);
}
