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


void    ft_simpleSort(Stack *stack,Stack *stack_b, int size)
{
    if (size <= 1)
        return;
    if (size == 2)
    {
        ft_sa(stack);
        return;
    }
    if (size == 3)
        ft_sort_tree(&stack);
    ft_sort_tree_plus(&stack, &stack_b, size);
}

void    ft_sort_tree_plus(Stack **stack, Stack **stack_b, int size)
{
    int min_id;

    min_id = 0;
    while (!is_sorted(*stack) &&  size != 3 )
    {
            min_id = find_smallest_id(*stack);
            smart_ra(*stack, min_id);
            ft_printStack(*stack);
            ft_pb(*stack_b, *stack);
            ft_printStack(*stack_b);
            size--;
    }
    if (size == 3 && !is_sorted(*stack))
            ft_sort_tree(stack);
    while (!isEmpty(*stack_b))
        ft_pa(*stack, *stack_b); 
}

int find_smallest_id(Stack *stack)
{
    int i;
    int min;
    int minIndex;

    i = 1;
    minIndex = 0;
    min = stack->items[0];
    while(i <= stack->top)
    {
        if (min > stack->items[i])
        {
              min = stack->items[i];
              minIndex = i;
        }  
        i++;
    }
    return (minIndex);
}

void    smart_ra(Stack *stack, int min_id)
{
    int size;
    int min;

    size = stack->top + 1;
    min = stack->items[min_id];
    printf("******************** min_id = %d ************************\n", min_id);

    if (min_id == stack->top)
        return ;
    while (min != stack->items[stack->top])
    {
        if (min_id > size / 2)
            ft_ra(stack);
        else
            ft_rra(stack);
    }
}

/*
    void ft_recu_pb(Stack *stack_b, Stack *stack ,int n)
{
    if (n <= 0)
        return ;
    ft_pb(stack_b, stack);
    ft_recu_pb(stack_b, stack, n - 1);
}

*/

void    ft_complexSort(Stack *stack, int size)
{
    printf("complex");
}