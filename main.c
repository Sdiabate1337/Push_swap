/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:57:38 by sdiabate          #+#    #+#             */
/*   Updated: 2023/06/23 17:57:43 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_Stack	*stack_a;
	t_Stack	*stack_b;
	int		stack_a_size;
	char	**param;

	param = NULL;
	if (argc < 2)
		return (-1);
	if (argc == 2)
		param = check_string(&argc, argv);
	else if (argc > 2)
		param = argv_cpy(argv, &argc);
	if (!ft_correct_input(param))
		ft_error();
	stack_a = ft_create_stack_with_arg(argc, param);
	stack_b = ft_new_stack(argc);
	stack_a_size = stack_a->top + 1;
	if (is_sorted(stack_a))
		return (0);
	if (stack_a_size <= 10)
		ft_simple_sort(stack_a, stack_b, stack_a_size);
	else if (stack_a_size > 10)
		ft_complex_sort(stack_a, stack_b, stack_a_size);
	return (0);
}
/* check if there are an error then print "error" message
        * check if  certains paramètres ne sont pas des nombres
        * if ne tiennent pas dans un int
        * s’il y a des doublons.
    */