#include <stdlib.h>
#include "libft.h"

int get_int_size(long int n)
{
    int counter;

    counter = 0;
    if (n == 0)
    {
        return (1);
    }
    while (n)
    {
        n /= 10;
        counter++;
    }
    return (counter);
}

char *ft_itoa(int n)
{
    long int nbr;
    int nbr_size;
    int is_negative;
    char *result;

    is_negative = 0;
    nbr = n;
    nbr_size = 0;
    if (nbr < 0)
    {
        is_negative = 1;
        nbr = -nbr;
        nbr_size++;
    }
    nbr_size += get_int_size(nbr);
    result = (char*)malloc((nbr_size + 1) * sizeof(char));
    result[nbr_size--] = '\0';
    while (nbr_size >= 0)
    {
        result[nbr_size--] = nbr % 10 + 48;
        nbr /= 10; 
    }
    if (is_negative)
    {
        result[0] = '-';
    }
    return (result);
}






// Function name       ft_itoa
// Prototype           char *ft_itoa(int n);
// Turn in files -
// Parameters          n: the integer to convert.
// Return value         The string representing the integer.
//                      NULL if the allocation fails.
// External functs.     malloc
// Description         Allocates (with malloc(3)) and returns a string
//                     representing the integer received as an argument.
//                     Negative numbers must be handled.
