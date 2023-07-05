#include "push_swap.h"

Stack	*ft_newStack(int maxsize)
{
	Stack	*stack;

	stack = (Stack *)malloc(sizeof(Stack));
	if (!stack)
		return (NULL);
	stack->maxsize = maxsize + 1;
	stack->top = -1;
	stack->items = (int *)malloc(sizeof(int *) * maxsize);
	return (stack);
}

Stack	*ft_createStackWithArg(int argc, char **param)
{
	Stack *stack;
	int i;

	i = argc - 1;
	stack = ft_newStack(argc - 1);
	while (i >= 0)
	{
		stack->items[++stack->top] = ft_atoi(param[i]);
		i--;
	}
	//ft_freeParam(param);
	return (stack);
}