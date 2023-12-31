/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_insn_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiroussa <oss@xtrm.me>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 01:04:49 by kiroussa          #+#    #+#             */
/*   Updated: 2023/11/22 01:04:53 by kiroussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ps/insn.h>

void	ps_insn_rrr(t_stack *a, t_stack *b)
{
	ps_stack_revrotate(a);
	ps_stack_revrotate(b);
}
