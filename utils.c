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
        zero += ft_isZero(argv[i]);
    }
    if (zero > 1)
        return (0);
    if (ft_hasDuplicate(argv))
        return (0);
    return (1);
}

void ft_printStack(Stack* stack)
{
    int i;

    i = stack->top;
    printf("size : %d \n",  stack->top + 1);
    if (isEmpty(stack))
    {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements:\n");
    while (i >= 0)
    {
        printf("%d: %d\n", i , stack->items[i]);
        i--;
    }
}


int ft_atoi(char *str)
{
    long      num;
    int      i;
    int     sign;

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
    if ((sign == 1 && num > INT_MAX) || (sign == -1 && num > (unsigned int)INT_MAX + 1))
         ft_error();
    return (sign * num);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	size_t	size;
	int		i;

	i = 0;
	size = ft_strlen((const char *)src);
	dest = (char *)malloc(sizeof(char) * size + 1);
	if (!dest)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}