#include <string.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t index;
    int searching_index;
    char *tmp_little;
    
    if (*little == '\0')
    {
        return ((char *)big);
    }
    index = 0;
    searching_index = 0;
    tmp_little = (char *)little;
    while (*big && index < len && *tmp_little)
    {
        searching_index = 0;
        tmp_little = (char *)little;
        if (*big == *tmp_little)
        {
            while (tmp_little[searching_index] && searching_index + index < len && tmp_little[searching_index] == big[searching_index])
            {
                searching_index++;
            }
            if (!tmp_little[searching_index])
                return (char *)big;
        }
        big++;
        index++;
    }
    return (0);
}