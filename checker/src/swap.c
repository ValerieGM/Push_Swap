/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <vgongora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 11:49:42 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/20 16:44:50 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	sa(t_stack *a)
{
	int temp;

	temp = a->value[0];
	if (a->max > 1)
	{
		a->value[0] = a->value[1];
		a->value[1] = temp;
	}
}

void	sb(t_stack *b)
{
	int temp;

	temp = b->value[0];
	if (b->max > 1)
	{
		b->value[0] = b->value[1];
		b->value[1] = temp;
	}
}

void	ss(t_stack *a, t_stack *b)
{
	int temp;

	temp = a->value[0];
	if (a->max > 1)
	{
		a->value[0] = a->value[1];
		a->value[1] = temp;
	}
	temp = b->value[0];
	if (b->max > 1)
	{
		b->value[0] = b->value[1];
		b->value[1] = temp;
	}
}
