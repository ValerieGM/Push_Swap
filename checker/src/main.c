/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <vgongora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 14:07:42 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/20 16:44:26 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

static int		rd(t_stack a, t_stack b, char *line)
{
	if (!(check_duplicate(&a) == 0))
		return (er());
	if (check_sort(&a) == 0)
	{
		while (get_next_line(0, &line))
		{
			if (instr(&a, &b, line) == -1)
				return (er());
			ft_strdel(&line);
		}
	}
	if (check_sort(&a) == 0)
		return (wr());
	ft_putendl("OK");
	//sleep(60);
	cleanup(&a, &b, line);
	return (1);
}

int				main(int ac, char **av)
{
	char	*line;
	t_stack	a;
	t_stack	b;

	b.max = 0;
	line = NULL;
	if (ac < 2)
		return (0);
	input(&a, &b, line, av, ac);	
	if (!(rd(a, b, line) == 0))
		exit(1);
	//sleep(60);
	return (0);
}
