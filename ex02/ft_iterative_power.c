int ft_iterative_power(int nb, int power)
{
    int i;

    i = nb;
    if (power == 0)
    return (1);
    while (power > 1)
    {
        nb *= i;
        power --;
    }
    return (nb);
}

#include<stdio.h>
int main(){
    printf(%d,ft_iterative_power(4,3));
}

