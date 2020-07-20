/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 11:40:47 by vgongora          #+#    #+#             */
/*   Updated: 2018/09/16 14:00:25 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int		smallest(t_stack *a)
{
	int v;
	int t;

	t = 1;
	v = a->value[0];
	while (t < a->max)
	{
		if (a->value[t] < v)
			v = a->value[t];
		t++;
	}
	return (v);
}

void	linecut(t_stack *a)
{
	sa(a);
	ra(a);
}

void	sort_3(t_stack *a)
{
	if (a->max == 2)
		sa(a);
	else if (a->max == 3)
	{
		if (a->value[0] < a->value[1] && a->value[0] < a->value[2] &&
				a->value[1] > a->value[2])
			linecut(a);
		if (a->value[0] > a->value[1] && a->value[0] > a->value[2] &&
				a->value[1] > a->value[2])
		{
			ra(a);
			sa(a);
		}
		if (a->value[0] > a->value[1] && a->value[0] < a->value[2] &&
				a->value[1] < a->value[2])
			sa(a);
		if (a->value[0] < a->value[1] && a->value[0] > a->value[2] &&
				a->value[1] > a->value[2])
			rra(a);
		if (a->value[0] > a->value[1] && a->value[0] > a->value[2] &&
				a->value[1] < a->value[2])
			ra(a);
	}
}

void	sort_4(t_stack *a, t_stack *b)
{
	int v;

	v = smallest(a);
	while (v != a->value[0])
		ra(a);
	pb(a, b);
	sort_3(a);
	push_a(a, b);
}

void	sort_5(t_stack *a, t_stack *b)
{
	int v;

	v = smallest(a);
	while (v != a->value[0])
		ra(a);
	pb(a, b);
	v = smallest(a);
	while (v != a->value[0])
		rra(a);
	pb(a, b);
	sort_3(a);
	push_a(a, b);
}
