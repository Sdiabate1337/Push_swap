#include "push_swap.h"

void    ft_pa(Stack *stack_a, Stack *stack_b)
{
    int item;

    if (!isEmpty(stack_b))
    {
        item = pop(stack_b);
        push(stack_a, item);
        ft_putstr_fd("pa\n", 1);
    }
}

void    ft_pb(Stack *stack_b, Stack *stack_a)
{
    int item;

    if (!isEmpty(stack_a))
    {
        item = pop(stack_a);
        push(stack_b, item);
        ft_putstr_fd("pb\n", 1);
    }
}

