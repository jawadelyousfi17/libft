#include <stdio.h>
#include <assert.h>
#include "../../libft.h"
#include <stdlib.h>
#include <string.h>

int test_tab(void *array, size_t size)
{
    size_t index;

    index = 0;
    while (index < size)
    {
        if (((unsigned char *)array)[index] != 0)
        {
            return (0);
        }
        index++;
    }
    return (1);
}

void test_ft_calloc()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           " char *strdup(const char *s);"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= n "
    //        "\033[0m\n"); // Cyan

    // init
    void *tab = ft_calloc(202020, 20);
    assert(test_tab(tab, 200));
    free(tab);
    void *tab1 = ft_calloc(50, 4);
    assert(test_tab(tab1, 200));
    free(tab1);

    void *tab2 = ft_calloc(100, 4);
    assert(test_tab(tab2, 400));
    free(tab2);

    void *tab3 = ft_calloc(0, 4);
    assert(test_tab(tab3, 0));
    free(tab3);

    void *tab4 = ft_calloc(1, 4);
    assert(test_tab(tab4, 4));
    free(tab4);

    void *tab5 = ft_calloc(10, 4);
    assert(test_tab(tab5, 40));
    free(tab5);

    void *tab6 = ft_calloc(25, 8);
    assert(test_tab(tab6, 200));
    free(tab6);

    void *tab7 = ft_calloc(75, 4);
    assert(test_tab(tab7, 300));
    free(tab7);

    void *tab8 = ft_calloc(5, 10);
    assert(test_tab(tab8, 50));
    free(tab8);

    void *tab9 = ft_calloc(200, 1);
    assert(test_tab(tab9, 200));
    free(tab9);

    void *tab10 = ft_calloc(15, 6);
    assert(test_tab(tab10, 90));
    free(tab10);

    void *tab11 = ft_calloc(35, 4);
    assert(test_tab(tab11, 140));
    free(tab11);

    void *tab12 = ft_calloc(55, 2);
    assert(test_tab(tab12, 110));
    free(tab12);

    void *tab13 = ft_calloc(2, 25);
    assert(test_tab(tab13, 50));
    free(tab13);

    void *tab14 = ft_calloc(300, 4);
    assert(test_tab(tab14, 1200));
    free(tab14);

    void *tab15 = ft_calloc(40, 10);
    assert(test_tab(tab15, 400));
    free(tab15);

    void *tab16 = ft_calloc(20, 5);
    assert(test_tab(tab16, 100));
    free(tab16);

    void *tab17 = ft_calloc(8, 8);
    assert(test_tab(tab17, 64));
    free(tab17);

    void *tab18 = ft_calloc(150, 2);
    assert(test_tab(tab18, 300));
    free(tab18);

    void *tab19 = ft_calloc(60, 7);
    assert(test_tab(tab19, 420));
    free(tab19);

    void *tab20 = ft_calloc(120, 3);
    assert(test_tab(tab20, 360));
    free(tab20);

    printf("\033[1;32m"
           "OK!"
           "\033[0m\n");
}
