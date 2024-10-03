/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm_bonus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:06:12 by eros-gir          #+#    #+#             */
/*   Updated: 2024/10/03 18:38:39 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_BONUS_H
# define LIBASM_BONUS_H

typedef struct s_list
{
	void			*data;
	struct s_list	*next;
} t_list;

int		ft_atoi_base(const char *str, const char *base);
void	ft_list_push_front(t_list **begin, void *data);
int		ft_list_size(t_list **begin);
void	ft_list_sort(t_list **begin, int (*cmp)());
void	ft_list_remove_if(t_list **begin, void *data, int (*cmp)());

#endif