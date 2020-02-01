#include <stdio.h>

main()
{
    int mat[3][4] = {
        {20, 42, 70, 34},
        {67, 98, 37, 41},
        {76, 99, 43, 65}
    };
    int i, j;
    int sum_r; /* 横の和 */
    int sum_c[4] = {0, 0, 0, 0}; /* 縦の各列の和 */
    int total = 0; /* 全ての数の合計 */

    /* 各要素の表示と計算 */
    for(j = 0; j < 3; j++) {
        sum_r = 0;
        for(i = 0; i < 4; i++) {
            printf("%4d ", mat[j][i]);
            sum_r += mat[j][i];
            sum_c[i] += mat[j][i];
        }
        printf("| %4\n", sum_r);
    }

    /* 仕切り線と最後の行の表示 */
    printf("--------------------+----\n");
    for(i = 0; i < 4; i++) {
        printf("%4d ", sum_c[i]);
        total += sum_c[i];
    }
    printf("| %4\n", total);
}