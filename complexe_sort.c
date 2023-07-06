/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complexe_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:32:58 by sdiabate          #+#    #+#             */
/*   Updated: 2023/07/06 12:33:04 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_complex_sort(t_Stack *stack, t_Stack *stack_b, int size)
{
	int	max_num;
	int	bit_num;

	bit_num = 0;
	max_num = size - 1;
	ft_simplify(&stack, size);
	while ((max_num >> bit_num) != 0)
		bit_num++;
	ft_radix_sort(&stack, &stack_b, bit_num);
}

void	ft_radix_sort(t_Stack **stack, t_Stack **stack_b, int bit_num)
{
	int	i;
	int	j;
	int	num;
	int	size;

	i = 0;
	size = (*stack)->top + 1;
	while (i < bit_num && !is_sorted(*stack))
	{
		j = 0;
		while (j < size)
		{
			num = (*stack)->items[(*stack)->top];
			if (((num >> i) & 1) == 1)
				ft_ra(*stack);
			if (((num >> i) & 1) == 0)
				ft_pb(*stack_b, *stack);
			j++;
		}
		while (!is_empty(*stack_b))
			ft_pa(*stack, *stack_b);
		i++;
	}
}

void	ft_simplify(t_Stack **stack, int size)
{
	int		*cpy;
	t_Stack	*s;
	int		i;

	cpy = (int *)malloc(size * sizeof(int));
	if (!cpy)
		return ;
	s = *stack;
	i = -1;
	while (++i < size)
		cpy[i] = s->items[i];
	ft_insert_sort(cpy, size);
	ft_conver_2_sort_id(s->items, cpy, size);
}

void	ft_conver_2_sort_id(int *ar1, int *ar2, int size)
{
	int	i;
	int	j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
		{
			if (ar1[i] == ar2[j])
			{
				ar1[i] = j;
				break ;
			}
		}
	}
}

void	ft_insert_sort(int *ar, int size)
{
	int	i;
	int	key;
	int	j;

	i = 1;
	while (i < size)
	{
		key = ar[i];
		j = i - 1;
		while (j >= 0 && ar[j] > key)
		{
			ar[j + 1] = ar[j];
			j--;
		}
		ar[j + 1] = key;
		i++;
	}
}
