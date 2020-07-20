/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <vgongora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 14:03:41 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/20 16:47:19 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHECKER_H
# define _CHECKER_H

# include "../../push_swap/includes/ps.h"

int					wr(void);
int					er(void);
int					instr(t_stack *a, t_stack *b, char *av);
void				cleanup(t_stack *a, t_stack *b, char *line);
void				input(t_stack *a, t_stack *b, char *line, char **av, int ac);

void				sa(t_stack *a);
void				sb(t_stack *b);
void				ss(t_stack *a, t_stack *b);

void				pa(t_stack *a, t_stack *b);
void				pb(t_stack *a, t_stack *b);

void				ra(t_stack *a);
void				rb(t_stack *b);
void				rr(t_stack *a, t_stack *b);

void				rra(t_stack *a);
void				rrb(t_stack *b);
void				rrr(t_stack *a, t_stack *b);

#endif
