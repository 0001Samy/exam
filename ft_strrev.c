/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 13:44:22 by sabadoud          #+#    #+#             */
/*   Updated: 2021/08/06 14:04:20 by sabadoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
	int i;
	int n;
	int swap;

	i = 0;
	n = 0;
	swap = 0;
	while (str[n])
		n++;
	n = n - 1;
	while (i < n)
	{
		swap = str[i];
		str[i] = str[n];
		str[n] = swap;
		i++;
		n--;
	}
	return (str);
}

int main()
{
	char	s[100] =  "12345";

	printf("%s\n", ft_strrev(s));
	// s = ft_strrev(s);
	// s = ft_strrev(s);
	return (0);
}
