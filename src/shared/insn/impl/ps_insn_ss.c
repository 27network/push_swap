/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_insn_ss.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <oss@xtrm.me>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 01:05:11 by kiroussa          #+#    #+#             */
/*   Updated: 2023/11/22 01:05:15 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ps/insn.h>

void	ps_insn_ss(t_stack *a, t_stack *b)
{
	ps_stack_swap(a);
	ps_stack_swap(b);
}
