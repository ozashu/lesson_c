#include <unistd.h>

int main(void)
{
    char s = 'z';
    write(1, &s, 1);
    return 0;
}