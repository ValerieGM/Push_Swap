/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <vgongora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 11:12:59 by vgongora          #+#    #+#             */
/*   Updated: 2020/07/20 16:44:11 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

static int		cut(t_stack *a, t_stack *b, char *line)
{
	cleanup(a, b, line);
	return (er());
}

static void		arrdel(char ***str)
{
	int		v;

	v = -1;
	if (!*str)
		return ;
	while ((*str)[++v])
		ft_strdel(&(*str)[v]);
	free(*str);
	*str = NULL;
}

static char		**arrjoin(char **src, char *str)
{
	int		v;
	char	**dest;

	v = 0;
	if (!src)
		return (NULL);
	if (!str)
		return (src);
	while (src[v])
		v++;
	v++;
	if (!(dest = (char **)malloc(sizeof(char *) * v + 2)))
		return (NULL);
	v = -1;
	while (src[++v])
		dest[v] = ft_strdup(src[v]);
	arrdel(&src);
	dest[v++] = ft_strdup(str);
	free(str);
	dest[v] = NULL;
	return (dest);
}

static char		**join(char **av, int ac)
{
	int		v;
	int		t;
	char	**arr;
	char	**dest;

	dest = ft_strsplit(av[1], ' ');
	v = 2;
	while (v < ac)
	{
		arr = ft_strsplit(av[v], ' ');
		t = 0;
		while (arr[t])
			dest = arrjoin(dest, arr[t++]);
		v++;
	}
	return (dest);
}

void			input(t_stack *a, t_stack *b, char *line,  char **av, int ac)
{
	char	**str;
	int		v;
	long	t;
	int		u;

	v = 0;
	u = 0;
	str = join(av, ac);
	while (str[u])
	{
		t = ft_atol(str[v]);
		if (t < -2147483648 || t > 2147483647 || (ft_isnum(str[v]) == 0))
			if (!cut(a, b, line))
				exit(1);
		u++;
	}
	a->max = u;
	a->value = (int *)malloc(sizeof(int) * (a->max));
	b->value = (int *)malloc(sizeof(int) * (a->max));
	while (str[v])
	{
		t = ft_atol(str[v]);
		if (t < -2147483648 || t > 2147483647 || (ft_isnum(str[v]) == 0))
			if (!cut(a, b, line))
				exit(1);
		a->value[v] = (int)t;
		v++;
	}
	arrdel(&str);
}
