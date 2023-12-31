/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:28:55 by sdiabate          #+#    #+#             */
/*   Updated: 2023/07/06 12:28:59 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	**argv_cpy(char **argv, int *argc)
{
	int		i;
	char	**par;

	i = 1;
	par = (char **)malloc(sizeof(char *) * (*argc - 1));
	if (!par)
		return (NULL);
	while (i < *argc + 1)
	{
		par[i - 1] = argv[i];
		i++;
	}
	par[*argc - 1] = NULL;
	*argc = *argc - 1;
	return (par);
}

int	ft_atoi(char *str)
{
	long	num;
	int		i;
	int		sign;

	num = 0;
	i = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
		if (str[i] < '0' || str[i] > '9')
			ft_error();
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			ft_error();
		num = num * 10 + (str[i++] - '0');
	}
	if ((sign == 1 && num > INT_MAX) || (sign == -1 && num < INT_MIN))
		ft_error();
	return (sign * num);
}

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(3);
}

void	ft_free_stack(t_Stack *stack)
{
	if (stack != NULL)
	{
		if (stack->items != NULL)
			free(stack->items);
		free(stack);
	}
}

