#include <stdio.h>

int main(void){
    int a, b;
    puts("2つの整数を入力してください");
    printf("a: "); scanf("%d", &a);
    printf("b: "); scanf("%d", &b);
    printf("それらの和は%dで積は%dです。", a + b, a * b); 
}