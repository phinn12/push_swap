/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibkocak <ibkocak@student.42istanbul.co>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:08:05 by ibkocak           #+#    #+#             */
/*   Updated: 2024/04/27 17:08:14 by ibkocak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pb(t_stack *stack)
{
	int	i;

	if (stack->sizea)
	{
		stack->sizeb++;
		i = stack->sizeb;
		while (--i > 0)
			stack->b[i] = stack->b[i - 1];
		stack->b[0] = stack->a[0];
		i = -1;
		stack->sizea--;
		while (++i < stack->sizea)
			stack->a[i] = stack->a[i + 1];
		ft_printf("pb\n");
	}
	else
		return ;
}

void	ft_pa(t_stack *stack)
{
	int	i;

	if (stack->sizeb)
	{
		stack->sizea++;
		i = stack->sizea;
		while (--i > 0)
			stack->a[i] = stack->a[i - 1];
		stack->a[0] = stack->b[0];
		i = -1;
		stack->sizeb--;
		while (++i < stack->sizeb)
			stack->b[i] = stack->b[i + 1];
		ft_printf("pa\n");
	}
	else
		return ;
}
