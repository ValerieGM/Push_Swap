/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 13:48:11 by vgongora          #+#    #+#             */
/*   Updated: 2018/09/20 13:55:46 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void			err(void)
{
	ft_putendl_fd("Error", 2);
	exit(1);
}

int				check_sort(t_stack *a)
{
	int v;

	v = 0;
	while (v < a->max - 1)
	{
		if (a->value[v] > a->value[v + 1])
			return (0);
		v++;
	}
	return (1);
}

int				check_duplicate(t_stack *a)
{
	int v;
	int t;

	v = 0;
	while (v < a->max)
	{
		t = v + 1;
		while (t < a->max)
		{
			if (a->value[v] == a->value[t])
				return (-1);
			t++;
		}
		v++;
	}
	return (0);
}

int				ft_isnum(char *str)
{
	int v;

	v = 0;
	if (!str)
		return (0);
	while (str[v])
	{
		if (str[v] == '-' || str[v] == '+')
			v++;
		if (!ft_isdigit(str[v]))
			return (0);
		v++;
	}
	return (1);
}

long			ft_atol(const char *str)
{
	long			res;
	long			sign;
	long			len;

	sign = 1;
	res = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\r' || *str == '\v' || *str == '\f' || *str == '0')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	len = 0;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str++ - '0';
		len++;
	}
	return ((long)(res * sign));
}
