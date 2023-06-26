#include "push_swap.h"

int is_sorted(Stack *stack)
{
    int i;

    i = stack->top;
    if (isEmpty(stack))
        return (1);
    while (i > 0)
    {
        if (stack->items[i] > stack->items[i - 1])
            return (0);
        i--;
    }
    return (1);
}

void ft_sort_tree(Stack **stack)
{
    Stack *s = *stack;
    
    if (s->items[s->top] > s->items[s->top - 1] && s->items[s->top] < s->items[0] 
        && s->items[s->top - 1] < s->items[0])
            ft_sa(s);
    if (s->items[s->top - 1] > s->items[0] && s->items[s->top] > s->items[0] 
       && s->items[s->top - 1] < s->items[s->top])
    {
        ft_sa(s);
        ft_rra(s);
    }
    if (s->items[s->top - 1] < s->items[0] && s->items[s->top - 1] < s->items[s->top]
        && s->items[s->top] > s->items[0])
            ft_ra(s);
   
    if (s->items[s->top - 1] > s->items[0] && s->items[s->top - 1] > s->items[s->top]
        && s->items[s->top] < s->items[0])
    {
        ft_sa(s);
        ft_ra(s);
    }
    if (s->items[s->top - 1] > s->items[0] && s->items[s->top - 1] > s->items[s->top]
        && s->items[s->top] > s->items[0])
            ft_rra(s);
    return ;
}


void    ft_simpleSort(Stack *stack, int size)
{
    if (size <= 1)
        return;
    else if (size == 2)
    {
        ft_sa(stack);
        return;
    }
    else if (size == 3)
        ft_sort_tree(&stack);
    else
        ft_sort_tree_plus(&stack);
}

void    ft_sort_tree_plus(Stack **stack)
{
    printf("tree+plus\n");
}

void    ft_complexSort(Stack *stack, int size)
{
    printf("complex");
}