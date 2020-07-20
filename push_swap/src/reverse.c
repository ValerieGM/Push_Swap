/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:20:31 by vgongora          #+#    #+#             */
/*   Updated: 2018/09/15 14:28:08 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	rra(t_stack *a)
{
	int v;
	int temp;

	v = a->max - 1;
	temp = a->value[v];
	while (v > 0)
	{
		a->value[v] = a->value[v - 1];
		v--;
	}
	a->value[0] = temp;
	ft_putendl("rra");
}

void	rrb(t_stack *b)
{
	int v;
	int temp;

	v = b->max - 1;
	temp = b->value[v];
	while (v > 0)
	{
		b->value[v] = b->value[v - 1];
		v--;
	}
	b->value[0] = temp;
	ft_putendl("rrb");
}

void	rrr(t_stack *a, t_stack *b)
{
	int v;
	int temp;

	v = a->max - 1;
	temp = a->value[v];
	while (v > 0)
	{
		a->value[v] = a->value[v - 1];
		v--;
	}
	a->value[0] = temp;
	v = b->max - 1;
	temp = b->value[v];
	while (v > 0)
	{
		b->value[v] = b->value[v - 1];
		v--;
	}
	b->value[0] = temp;
	ft_putendl("rrr");
}
