#include <stdio.h>

int main()
{
    int a, b;
    puts("2つの整数を入力してください: ");
    printf("整数a: "); scanf("%d", &a);
    printf("整数b: "); scanf("%d", &b);
    printf("aの値はbの%dです。", a % b);
}