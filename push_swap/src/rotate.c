/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:11:00 by vgongora          #+#    #+#             */
/*   Updated: 2018/09/15 15:02:35 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

void	ra(t_stack *a)
{
	int v;
	int temp;

	v = 0;
	temp = a->value[0];
	while (v < a->max - 1)
	{
		a->value[v] = a->value[v + 1];
		v++;
	}
	a->value[v] = temp;
	ft_putendl("ra");
}

void	rb(t_stack *b)
{
	int v;
	int temp;

	v = 0;
	temp = b->value[0];
	while (v < b->max - 1)
	{
		b->value[v] = b->value[v + 1];
		v++;
	}
	b->value[v] = temp;
	ft_putendl("rb");
}

void	rr(t_stack *a, t_stack *b)
{
	int v;
	int temp;

	v = 0;
	temp = a->value[0];
	while (v < a->max - 1)
	{
		a->value[v] = a->value[v + 1];
		v++;
	}
	a->value[v] = temp;
	v = 0;
	temp = a->value[0];
	while (v < b->max - 1)
	{
		b->value[v] = b->value[v + 1];
		v++;
	}
	a->value[v] = temp;
	ft_putendl("rr");
}
