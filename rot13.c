/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:54:03 by sabadoud          #+#    #+#             */
/*   Updated: 2021/08/11 18:03:10 by sabadoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	rot13(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		c = c + 13;
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		c = c - 13;
	return c;
}
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while(*av[1])
			ft_putchar(rot13(*av[1]++));
			ft_putchar('\n');
	}
	return 0;
}
