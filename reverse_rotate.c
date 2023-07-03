#include "push_swap.h"

void    ft_rra(Stack *stack_a)
{
    int bottom;
    int i;

    if (!isEmpty(stack_a))
    {
        bottom = stack_a->items[0];
        i = 0;
        while (i < stack_a->top)
        {
            stack_a->items[i] = stack_a->items[i + 1];
            i++;
        }
        stack_a->items[stack_a->top] = bottom;
        ft_putstr_fd("rra\n", 1);
    }
}


void    ft_rrb(Stack *stack_b)
{
    int bottom;
    int i;

    if (!isEmpty(stack_b))
    {
        bottom = stack_b->items[0];
        i = 0;
        while (i < stack_b->top)
        {
            stack_b->items[i] = stack_b->items[i + 1];
            i++;
        }
        stack_b->items[stack_b->top] = bottom;
        ft_putstr_fd("rrb\n", 1);
    }
}

void    ft_rrr(Stack *stack_a, Stack *stack_b)
{
    ft_rra(stack_a);
    ft_rrb(stack_b);
    ft_putstr_fd("rrr\n", 1);
}