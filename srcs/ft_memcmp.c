/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 22:52:10 by bahaas            #+#    #+#             */
/*   Updated: 2020/11/05 16:01:55 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*tmp_s1;
	char	*tmp_s2;
	size_t	i;

	tmp_s1 = (char *)s1;
	tmp_s2 = (char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (tmp_s1 && tmp_s2 && tmp_s1[i] == tmp_s2[i] && i < n)
		i++;
	return (tmp_s1[i] - tmp_s2[i]);
}
