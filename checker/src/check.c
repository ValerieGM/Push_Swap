/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <vgongora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 10:58:10 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/20 16:44:21 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int		wr(void)
{
	ft_putendl("KO");
	return (0);
}

int		er(void)
{
	ft_putendl_fd("Error", 2);
	return (0);
}

int		instr(t_stack *a, t_stack *b, char *line)
{
	if (ft_strcmp(line, "pa") == 0)
		pa(a, b);
	else if (ft_strcmp(line, "pb") == 0)
		pb(a, b);
	else if (ft_strcmp(line, "rr") == 0)
		rr(a, b);
	else if (ft_strcmp(line, "ra") == 0)
		ra(a);
	else if (ft_strcmp(line, "rb") == 0)
		rb(b);
	else if (ft_strcmp(line, "rrr") == 0)
		rrr(a, b);
	else if (ft_strcmp(line, "rra") == 0)
		rra(a);
	else if (ft_strcmp(line, "rrb") == 0)
		rrb(b);
	else if (ft_strcmp(line, "ss") == 0)
		ss(a, b);
	else if (ft_strcmp(line, "sa") == 0)
		sa(a);
	else if (ft_strcmp(line, "sb") == 0)
		sa(b);
	else
		return (-1);
	return (0);
}

void	cleanup(t_stack *a, t_stack *b, char *line)
{
	free(a->value);
	free(b->value);
	free(line);
}
