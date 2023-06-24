#include "push_swap.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}

int ft_hasDuplicate(char *argv[])
{
    int i;
    int j;

    i = 0;
    while (argv[i])
    {
        j = i + 1;
        while (argv[j])
        {
            if (strcmp(argv[i], argv[j]) == 0)
               return (1);
            j++;
        }
        i++;
    }
    return (0);
}

void    ft_error()
{
    ft_putstr_fd("Error\n", 2);
    exit(3);
}

/*
check it is zero string
    to avoid these cases:
        * +0 != -0
        * 00 != 000
*/
int ft_isZero(char *arg)
{
    int i;

    i = 0;
    if (arg[i] == '+' || arg[i] == '-')
        i++;
    while (arg[i] && arg[i] == '0')
        i++;
    if (arg[i] != '\0')
        return (0);
    return (1);
}

/*
    check if argv contain all a number
*/
int ft_isNum(char *arg)
{
    int i = 0;

    if (arg[i] == '+' || arg[i] == '-')
    {
        if (arg[i + 1] == '\0')
            return 0;
        i++;
    }

    while (arg[i] != '\0')
    {
        if (!isdigit(arg[i]))
            return 0;
        i++;
    }
    return 1;
}

/*
    *check the if the arg[i] overflow the int type
*/
#include <string.h>

int isOverflow(char *str) {
    char *maxValue;
    int maxDigits;
    int numDigits;
    int isNegative;

    numDigits = 0;
    isNegative = 0;
    if (*str == '\0')
        return 0;
    if (*str == '-') {
        isNegative = 1;
        str++;
       numDigits++;
    }
    maxDigits = isNegative ? 11 : 10;
    maxValue = isNegative ? "-2147483648" : "2147483647";
    while (*str == '0')
        str++;
    if (strlen(str) > maxDigits) 
        return 1;
    if (strlen(str) < maxDigits) 
        return 0;
    while (*str != '\0' && numDigits < maxDigits) {
        if (*str - '0' > maxValue[numDigits] - '0')
            return 1;
        numDigits++;
        str++;
    }

    return 0;
}




int ft_correctInput(char *argv[])
{
    int i;
    int zero;

    i = 0;
    zero = 0;
    while (argv[++i])
    {
        if (!ft_isNum(argv[i]))
            return (0);
        if (isOverflow(argv[i]))
            return (0);
        zero += ft_isZero(argv[i]);
    }
    if (zero > 1)
        return (0);
    if (ft_hasDuplicate(argv))
        return (0);
    return (1);
}

void printStack(Stack* stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty.\n");
        return;
    }
    
    printf("Stack elements:\n");
    for (int i = stack->top; i >= 0; i--)
    {
        printf("%d\n", stack->items[i]);
    }
}
