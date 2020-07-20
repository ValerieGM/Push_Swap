/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <vgongora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 12:47:50 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/20 16:48:36 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PS_H
# define _PS_H

# include "../../libft/includes/libft.h"
# include <stdio.h>

typedef struct		s_stack
{
	int				max;
	int				*value;
}					t_stack;

void				sa(t_stack *a);
void				sb(t_stack *b);
void				ss(t_stack *a, t_stack *b);

void				pa(t_stack *a, t_stack *b);
void				pb(t_stack *a, t_stack *b);
void				push_a(t_stack *a, t_stack *b);

void				ra(t_stack *a);
void				rb(t_stack *b);
void				rr(t_stack *a, t_stack *b);

void				rra(t_stack *a);
void				rrb(t_stack *b);
void				rrr(t_stack *a, t_stack *b);

void				err(void);
void				clean(t_stack *a, t_stack *b);
int					ft_isnum(char *str);
int					check_sort(t_stack *a);
int					check_duplicate(t_stack *a);
long				ft_atol(char const *str);

void				sort_3(t_stack *a);
void				sort_4(t_stack *a, t_stack *b);
void				sort_5(t_stack *a, t_stack *b);

#endif
