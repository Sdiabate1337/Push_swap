/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:38:14 by sdiabate          #+#    #+#             */
/*   Updated: 2023/06/23 16:39:01 by sdiabate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <ctype.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct Stack
{
	int	maxsize;
	int	top;
	int	*items;
}		t_Stack;

void	print2D(char **par);
int		ft_strlen(const char *str);
int		ft_isdigit(char c);
t_Stack	*ft_new_stack(int maxsize);
t_Stack	*ft_create_stack_with_arg(int argc, char **param);
char	**argv_cpy(char **argv, int *argc);
void	push(t_Stack *stack, int item);
int		is_empty(t_Stack *stack);
int		pop(t_Stack *stack);
int		is_full(t_Stack *stack);
void	ft_sb(t_Stack *stack_b);
void	ft_sa(t_Stack *stack_a);
void	ft_ra(t_Stack *stack_a);
void	ft_rb(t_Stack *stack_b);
void	ft_rrb(t_Stack *stack_b);
void	ft_rra(t_Stack *stack_a);
void	ft_pb(t_Stack *stack_b, t_Stack *stack_a);
void	ft_pa(t_Stack *stack_a, t_Stack *stack_b);
void	ft_rr(t_Stack *stack_a, t_Stack *stack_b);
void	ft_rrr(t_Stack *stack_a, t_Stack *stack_b);

void	ft_freeParam(char **param);
int		ft_has_duplicate(char *argv[]);
void	ft_error(void);
int		ft_is_zero(char *arg);
int		ft_is_num(char *arg);
int		ft_correct_input(char *argv[]);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_printStack(t_Stack *stack);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
char	**check_string(int *argc, char **argv);
char	**ft_split(char const *s, char c);

char	*ft_substr(char const *s, unsigned int start, size_t len);

int		is_sorted(t_Stack *stack);
void	ft_simple_sort(t_Stack *stack_a, t_Stack *stack_b, int size);
void	ft_complex_sort(t_Stack *stack, t_Stack *stack_b, int size);
void	ft_sort_tree_plus(t_Stack **stack, t_Stack **stack_b, int size);
void	ft_sort_tree(t_Stack **stack);
void	ft_recu_pb(t_Stack *stack_b, t_Stack *stack, int n);
int		find_smallest_id(t_Stack *stack);
void	smart_ra(t_Stack *stack, int min_id);
void	ft_simplify(t_Stack **stack, int size);
void	ft_insert_sort(int *ar, int size);
char	*ft_strdup(char *src);
void	ft_conver_2_sort_id(int *ar1, int *ar2, int size);
void	ft_radix_sort(t_Stack **stack, t_Stack **stack_b, int bit_num);

#endif