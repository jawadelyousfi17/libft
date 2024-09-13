#include "../libft.h"
#include <stdio.h>

void display_list(t_list *lst)
{
    t_list *tmp;

    if (!lst)
    {
        printf("List is empty \n");
        return;
    }
    tmp = lst;
    while (tmp)
    {
        printf("%s \n", (char *)tmp->content);
        tmp = tmp->next;
    }
}

t_list *ft_lstnew(void *content)
{
    t_list *new_node;

    new_node = (t_list *)malloc(sizeof(t_list));
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}

int ft_lstsize(t_list *lst)
{
    t_list *tmp;
    int size;

    size = 0;
    tmp = lst;
    while (tmp)
    {
        tmp = tmp->next;
        size++;
    }
    return (size);
}

t_list *ft_lstlast(t_list *lst)
{
    t_list *tmp;

    if (!lst)
    {
        return (0);
    }
    tmp = lst;
    while (tmp->next)
    {
        tmp = tmp->next;
    }
    return (tmp);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *tmp;

    if (!*lst)
    {
        *lst = new;
        return;
    }
    tmp = *lst;
    while (tmp->next)
    {
        tmp = tmp->next;
    }
    tmp->next = new;
}

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst || !del)
    {
        return;
    }
    (*del)(lst->content);
    free(lst);
}

void ft_lstclear(t_list **lst,  void (*del)(void*))
{
    t_list *tmp;
    t_list *holder;

    if (!*lst)
    {
        return;
    }
    holder = *lst;
    tmp = *lst;
    while (tmp)
    {
        holder = tmp;
        tmp = tmp->next;
        (*del)(holder->content);
        free(holder);
    }
    *lst = NULL;
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *tmp;

    if (!lst || !f)
    {
        return;
    }
    tmp = lst;
    while (tmp)
    {
        (*f)(tmp->content);
        tmp = tmp->next;
    }
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *holder;

    new_list = NULL; 
    holder = NULL;
    if (!lst)
    {
        return (NULL);
    }
    while (lst)
    {
        holder = ft_lstnew((*f)(lst->content));
        if(!holder)
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, holder);
        lst = lst->next;
    }
    return new_list;
}

// TESTS

// void del(void *c)
// {
//     if (!c)
//     {
//         return;
//     }
//     free(c);
// }

// void *m(void *s)
// {
//     int i = 0;
//     char* str = (char*)malloc(10);
//     while (((char*)s)[i] && i < 10)
//     {
//         str[i] = ((char*)s)[i] + 1;
//         i++;
//     }
//     str[i] = '\0';
//     return str;
    
// }

// void add(void *s)
// {
//     ((char *)s)[0] = '0';
// }

// int main()
// {
//     char *str1 = strdup("1");
//     char *str2 = strdup("2");
//     char *str3 = strdup("3");
//     char *str4 = strdup("4");
//     char *str5 = strdup("5");
//     char *str6 = strdup("6");

//     t_list *head = ft_lstnew((void *)str1);
//     t_list *new = ft_lstnew((void *)str2);
//     t_list *new1 = ft_lstnew((void *)str3);
//     t_list *new2 = ft_lstnew((void *)str4);
//     t_list *new3 = ft_lstnew((void *)str5);
//     t_list *new4 = ft_lstnew((void *)str6);


//     ft_lstadd_front(&head, new);
//     ft_lstadd_front(&head, new1);
//     ft_lstadd_front(&head, new2);
//     ft_lstadd_front(&head, new3);
//     ft_lstadd_front(&head, new4);

//     t_list *maped = ft_lstmap(head,m,del);

//     display_list(head);
//     display_list(maped);
//     ft_lstclear(&head,del);
//     ft_lstclear(&maped,del);

// }

