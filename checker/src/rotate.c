/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <vgongora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:11:00 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/20 16:44:43 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

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
}
