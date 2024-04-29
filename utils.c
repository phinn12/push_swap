/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibkocak <ibkocak@student.42istanbul.co>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:16:09 by ibkocak           #+#    #+#             */
/*   Updated: 2024/04/27 17:16:12 by ibkocak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_stack *stack)
{
	free(stack->a);
	free(stack->b);
	write (2, "Error\n", 6);
	exit(1);
}

int	ft_psatoi(char *str, t_stack *stack, unsigned int i, int sign)
{
	unsigned long int	num;

	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		ft_error(stack);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			ft_error(stack);
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	if ((num > 2147483648 && sign == -1) || (num > 2147483647 && sign == 1))
		ft_error(stack);
	return (num * sign);
}

int	ft_stacklen(char **av, int i)
{
	while (*av)
	{
		av++;
		i++;
	}
	return (i);
}

int	ft_checks(int *stack, int size, int order)
{
	int	i;

	if (order == 0)
	{
		i = 1;
		while (i < size)
		{
			if (stack[i - 1] > stack[i])
				return (0);
			i++;
		}
		return (1);
	}
	else
	{
		i = 1;
		while (i < size)
		{
			if (stack[i - 1] < stack[i])
				return (0);
			i++;
		}
		return (1);
	}
}

void	ft_checkdup(t_stack *stack, int size, int i, int j)
{
	while (i < size)
	{
		while (j < size)
		{
			if (stack->a[i] == stack->a[j])
				ft_error(stack);
			j++;
		}
		i++;
		j = i + 1;
	}
}
