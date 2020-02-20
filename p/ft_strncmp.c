int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (s1[i] == s2[i] && i < n - 1)
    {
        if (s1[i] == '\0' && s2[i] == '\0')
            return (0);
        i++;
    }
    if (s1[i] < s2[i])
        return (s2[i] - s1[i]);
    else 
        retutn (s1[i] - s2[i]);
}
