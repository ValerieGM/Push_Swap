/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:42:17 by vgongora          #+#    #+#             */
/*   Updated: 2019/08/18 13:55:12 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

static void		srt(t_stack *a, t_stack *b, int ac)
{
	if (check_duplicate(a))
	{
		clean(a, b);
		err();
	}
	if (check_sort(a) == 1)
	{
		clean(a, b);
		exit(1);
	}
	if (!(check_sort(a) == 1))
	{
		if (a->max <= 3)
			sort_3(a);
		else if (a->max == 4)
			sort_4(a, b);
		else if (a->max > 4)
			sort_5(a, b);
	}
}

void			clean(t_stack *a, t_stack *b)
{
	free(a->value);
	free(b->value);
}

int				main(int ac, char **av)
{
	int		v;
	long	t;
	t_stack a;
	t_stack	b;

	v = -1;
	a.max = ac - 1;
	b.max = 0;
	if (ac < 2)
		return (0);
	a.value = (int *)malloc(sizeof(int) * (ac - 1));
	b.value = (int *)malloc(sizeof(int) * (ac - 1));
	while (++v < a.max)
	{
		t = ft_atol(av[v + 1]);
		if (t > 2147483647 || t < -2147483648 || (ft_isnum(av[v + 1]) == 0))
		{
			clean(&a, &b);
			err();
		}
		a.value[v] = (int)t;
	}
	srt(&a, &b, ac);
	clean(&a, &b);
	return (0);
}
