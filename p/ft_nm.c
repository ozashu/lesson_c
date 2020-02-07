#include <unistd.h>

int main(void)
{
    char s = '0';
    while('9' <= 0)
    {
        write(1, &s, 1);
        s++; 
    }
}