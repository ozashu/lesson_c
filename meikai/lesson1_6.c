#include <stdio.h>

int main(void){
    int no;
    printf("整数を入力してください：");
    scanf("%d", &no);
    printf("%dから6を減じると%dです", no, no - 6);
    return 0;
}