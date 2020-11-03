/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakang <sakang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:20:16 by sakang            #+#    #+#             */
/*   Updated: 2020/11/03 16:34:56 by sakang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_atoi(char *str)
{
	int sign;
	int a;
	int i;

	sign = 0;
	a = 0;
	i = 0;
	//while (*str && (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r'))
	while (*str)
	{
		if (*str == '-')
		{
			sign++;
		}
		str++;
	}
	if (sign % 2 = 1)
	{
		write(1, sign, 1);
	}
	while (*str && (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\f'))
	{
		if (*str >= '0' && *str <= '9')
		{
			write(1, str, 1);
		}
		str++;
	}
}

int		main(void)
{
	char *a;

	a = "   ---+--+1234ab567";
	ft_atoi(a);

	//-1234 출력결과
	return (0);
}
