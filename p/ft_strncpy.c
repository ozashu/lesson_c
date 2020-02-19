char    *ft_strncpy(char *dest, char *src, unsigned int n);
{
    unsigned int i;

    i = 0;
    while (src[i] = '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return (dest);
}

int main(void)
{
    char s[4];
    ft_strncpy(s, "ab", 3);
    return (0);
}
