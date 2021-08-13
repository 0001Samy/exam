/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 11:32:34 by sabadoud          #+#    #+#             */
/*   Updated: 2021/08/06 14:12:56 by sabadoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int res;
	int neg;

	i = 0;
	neg = 0;
	res = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				neg++;
			i++;
		}
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	if (neg == 1)
		return (-res);
	return (res);
}

int main()
{
	char a[] = "    \n\n\v\f\r\t -845234AAAgreghrsth";
	printf("%d\n",ft_atoi(a));
}
