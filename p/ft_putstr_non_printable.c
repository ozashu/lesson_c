#include <unistd.h>

void    hex(int num)
{
    char    *hex;

    hex = "0123456789abcdef";
    write(1, &hex[num / 16], 1);
    write(1, &hex[num % 16], 1);
}

void    ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 0 && str[i] <= 31)
        {
            write(1, "\\", 1);
            hex(str[i]);
        }
        else {
            write(1, &str[i], 1);
        i++;
        }
    }
}
