char *ft_strrchr(const char *s, int c)
{
    const char *last_apparence;

    last_apparence = 0;
    while (*s)
    {
        if (*s == c)
        {
            last_apparence = s;
        }
        s++;
    }
    if (c == 0)
    {
        return ((char*) s);
    }
    return ((char*) last_apparence);
}