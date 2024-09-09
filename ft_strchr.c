char *ft_strchr(const char *s, int c)
{
    while (*s && *s != c)
    {
        s++;
    }
    if (*s == '\0' && c != 0)
    {
        return (0);
    }
    return ((char*) s);
}