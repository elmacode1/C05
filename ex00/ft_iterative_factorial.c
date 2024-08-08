int ft_iterative_factorial(int nb)
{
    int add;

    add = 1;
    if (nb == 0)
    return (1);
    if (nb < 0)
    return (0);
    while (nb > 0)
    {
        add *= nb;
        nb--;
    }
    return (add);
}

#include<stdio.h>
int main(){
    printf("%d",ft_iterative_factorial(5));
}
