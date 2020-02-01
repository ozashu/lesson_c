#include <stdio.h>

main()
{
    int i, j;

    for (j = 1; j <= 9; j++)
        for(i = 1; i <= 9; i++)
            printf("%d x %d = %d\n", j, i, j*i)
}
