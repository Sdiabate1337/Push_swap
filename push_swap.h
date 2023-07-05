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
#define PUSH_SWAP_H
#include <stdlib.h>
#include <string.h>
 #include <ctype.h>
 #include <unistd.h>
 #include <stdio.h>
 #include <limits.h>
typedef struct
{
    int maxsize;
    int top;
    int *items;
}   Stack;

void print2D(char **par);
int ft_strlen(const char *str);
int ft_isdigit(char c);
Stack* ft_newStack(int maxsize);
Stack *ft_createStackWithArg(int argc, char **param);
char    **argv_cpy(char **argv, int *argc);
void  push(Stack *stack, int item);
int isEmpty(Stack *stack);
int pop(Stack *stack);
int isFull(Stack *stack);
void    ft_sb(Stack *stack_b);
void    ft_sa(Stack *stack_a);
void    ft_ra(Stack *stack_a);
void    ft_rb(Stack *stack_b);
void    ft_rrb(Stack *stack_b);
void    ft_rra(Stack *stack_a);
void    ft_pb(Stack *stack_b, Stack *stack_a);
void    ft_pa(Stack *stack_a, Stack *stack_b);
void    ft_rr(Stack *stack_a, Stack *stack_b);
void    ft_rrr(Stack *stack_a, Stack *stack_b);

void ft_freeParam(char **param);
int ft_hasDuplicate(char *argv[]);
void ft_error();
int ft_isZero(char *arg);
int ft_isNum(char *arg);
int ft_correctInput(char *argv[]);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void ft_printStack(Stack* stack);
int ft_atoi(char *str);
int	ft_strcmp(char *s1, char *s2);
char	**check_string(int *argc, char **argv);
char	**ft_split(char const *s, char c);
static void	ft_free(char **strs, int j);
static int	ft_size_word(char const *s, char c, int i);
static int	ft_count_word(char const *s, char c);
char    *ft_substr(char const *s, unsigned int start, size_t len);

int is_sorted(Stack *stack);
void    ft_simpleSort(Stack *stack_a,Stack *stack_b, int size);
void    ft_complexSort(Stack *stack, Stack *stack_b, int size);
void    ft_sort_tree_plus(Stack **stack, Stack **stack_b, int size);
void ft_sort_tree(Stack **stack);
void ft_recu_pb(Stack *stack_b,Stack *stack ,int n);
int find_smallest_id(Stack *stack);
void    smart_ra(Stack *stack, int min_id);
void    ft_simplify(Stack **stack, int size);
void    ft_insertSort(int *ar, int size);
char	*ft_strdup(char *src);
void    ft_conver2SortId(int *ar1, int *ar2, int size);
void    ft_radixSort(Stack **stack, Stack **stack_b, int bit_num);

#endif