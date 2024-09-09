int ft_isalnum(int c)
{
    if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A') || (c >= '0' && c <= '9'))
    {
        return (8);
    }
    return (0);
}