#include <stdio.h>

main()
{
    char c = '/0';   /* キーボードから入力した1文字 */
    char prevletter; /* 以前の文字をとっておく */
    int wordnum;     /* 単語数 */
    int word_in;     /* 単語に入っていればtrue */

    while(1)
    {
        wordnum = 0;
        word_in = 1;
        prevletter = '\0';
        printf("文字列を入力してください:");
        while(1)
        {
            c = getchar();
            if (c == '\n')
            {
                if (word_in)
                    wordnum++;
                break;
            }
            prevletter = c;
            if (c == ' ' || c == '.')
            {
                if (word_in)
                {
                    wordnum++;
                    word_in = 0;
                }
            }
            else
                word_in = 1;
        }
        if (prevletter == '\0')
            break;
        printf("ワード数:%d\n", wordnum);
    }
}