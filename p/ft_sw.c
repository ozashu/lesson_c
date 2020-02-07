#include <stdio.h>

void ft_sw(int *a, int *b)
{
    int tmp;
    tmp = *b;
    *b = *a;
    *a = tmp;
}

int main(void)
{
    int a = 1, b = 2;
    ft_sw(&a, &b);
    printf("%d, %d", a, b);
}