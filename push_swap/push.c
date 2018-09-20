/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:28:22 by vgongora          #+#    #+#             */
/*   Updated: 2018/09/16 14:00:56 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	pa(t_stack *a, t_stack *b)
{
	int v;
	int t;

	t = 0;
	v = a->max;
	while (v > 0)
	{
		a->value[v] = a->value[v - 1];
		v--;
	}
	a->value[0] = b->value[0];
	while (t < b->max - 1)
	{
		b->value[t] = b->value[t + 1];
		t++;
	}
	b->max--;
	a->max++;
	ft_putendl("pa");
}

void	pb(t_stack *a, t_stack *b)
{
	int v;
	int t;

	t = 0;
	v = b->max;
	while (v > 0)
	{
		b->value[v] = b->value[v - 1];
		v--;
	}
	b->value[0] = a->value[0];
	while (t < a->max - 1)
	{
		a->value[t] = a->value[t + 1];
		t++;
	}
	b->max++;
	a->max--;
	ft_putendl("pb");
}

void	push_a(t_stack *a, t_stack *b)
{
	while (b->max > 0)
	{
		if (b->value[0] < b->value[1])
			sb(b);
		pa(a, b);
	}
}
