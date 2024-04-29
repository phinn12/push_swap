/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibkocak < ibkocak@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:13:34 by ibkocak           #+#    #+#             */
/*   Updated: 2024/04/28 20:06:23 by ibkocak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_swap(char **av)
{
	t_stack	stack;
	int		size;
	int		i;

	i = -1;
	size = ft_stacklen(av, 0);
	stack.a = malloc(size * sizeof(int));
	if (!stack.a)
		return ;
	stack.sizea = size;
	stack.b = malloc(size * sizeof(int));
	if (!stack.b)
	{
		free (stack.a);
		return ;
	}
	stack.sizeb = 0;
	while (++i < size)
		stack.a[i] = ft_psatoi(av[i], &stack, 0, 1);
	ft_checkdup(&stack, size, 0, 1);
	ft_sort(&stack, size);
	free(stack.a);
	free(stack.b);
}

void	free_tab(char **av)
{
	const void	*t = av;

	while (*av)
	{
		free (*av);
		av++;
	}
	free ((void *)t);
}

char	**parse(int argc, char **av)
{
	int		j;
	char	*tmp;
	char	*tmp2;

	j = 3;
	tmp2 = ft_strjoin(av[1], av[2]);
	while (argc != j)
	{
		tmp = ft_strjoin(tmp2, av[j++]);
		free(tmp2);
		tmp2 = tmp;
	}
	av = ft_split(tmp2, ' ');
	free(tmp2);
	return (av);
}

int	main(int argc, char **av)
{
	if (argc > 1)
	{
		if (argc > 2)
			av = parse(argc, av);
		else
			av = ft_split(*++av, ' ');
		if (!av)
			return (write(2, "Error\n", 6));
		ft_push_swap(av);
		free_tab(av);
	}
}
