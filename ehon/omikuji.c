#include <stdio.h>

main()
{
    char a;
    
    printf("1~3で好きな数字を入力してください\n");
    a = getchar()l;

    switch(a)
    {
        case '1';
            printf("中吉\n");
            break;
        case '2';
            printf("大吉\n");
            break;
        case '3';
            printf("小吉\n");
            break;
        default;
            printf("入力が間違っています\n");
    }
}