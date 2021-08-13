/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:49:08 by sabadoud          #+#    #+#             */
/*   Updated: 2021/08/13 13:49:09 by sabadoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int main(int ac, char **av)
{
    int i;
    int n;

    i = 1;
    n = 0;
    if (ac == 4)
    {
        while (av[1][n] != '\0')
        {
            if (av[1][n] == av[2][0])
            {
                av[1][n] = av[3][0];
            }
            ft_putchar(av[1][n]);
            n++;
        }
    }
    return 0;
}
