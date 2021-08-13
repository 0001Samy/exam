#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int doublebanks(char *str, int max, char c)
{
    int i;

    i = 0;
    while (i < max)
    {
        if(str[i] == c)
            return 0;
        i++; 
    }
    return 1;
}

void ouinion(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s1[i])
    {
        if (doublebanks(s1, i, s1[i]))
            ft_putchar(s1[i]);
        i++;
    }
    while (s2[j])
    {
        if (doublebanks(s1, i, s2[j]) && doublebanks(s2, j, s2[j]))
            ft_putchar(s2[j]);
        j++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        ouinion(av[1], av[2]);
        ft_putchar('\n');
    }
    else 
        ft_putchar('\n');
    return 0;
}