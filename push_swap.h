/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibkocak < ibkocak@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:14:27 by ibkocak           #+#    #+#             */
/*   Updated: 2024/04/28 17:40:41 by ibkocak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	sizea;
	int	sizeb;
}	t_stack;

void	free_tab(char **av);
void	ft_push_swap(char **av);
int		ft_stacklen(char **av, int i);
void	ft_error(t_stack *stack);
int		ft_psatoi(char *str, t_stack *stack, unsigned int i, int sign);
void	ft_checkdup(t_stack *stack, int size, int i, int j);
void	ft_sa(t_stack *stack);
void	ft_sb(t_stack *stack);
void	ft_ss(t_stack *stack);
void	ft_ra(t_stack *stack);
void	ft_rb(t_stack *stack);
void	ft_rr(t_stack *stack);
void	ft_rra(t_stack *stack);
void	ft_rrb(t_stack *stack);
void	ft_rrr(t_stack *stack);
void	ft_pb(t_stack *stack);
void	ft_pa(t_stack *stack);
int		ft_sort(t_stack *stack, int size);
int		ft_push(t_stack *stack, int len, char c);
int		ft_get_mid(int *midvalue, int *stack, int size);
int		ft_checks(int *pile, int size, int order);
void	ft_sort3(t_stack *s);
void	ft_sort_tmp(int *tmp_stack, int size);
int		ft_qsa(t_stack *stack, int len, int rbc, int midvalue);
int		ft_qsb(t_stack *stack, int len, int rbc);
void	ft_qs3(t_stack *stack, int len);
int		ft_sortsb(t_stack *stack, int len);

#endif