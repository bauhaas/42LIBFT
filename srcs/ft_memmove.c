/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 22:52:11 by bahaas            #+#    #+#             */
/*   Updated: 2020/10/13 21:24:50 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*tmp_src;
	char		*tmp_dest;

	i = 0;
	tmp_src = (char *)src;
	tmp_dest = (char *)dest;
	if (tmp_src > tmp_dest)
	{
		while (i < n)
		{
			tmp_dest[i] = tmp_src[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			tmp_dest[n - 1] = tmp_src[n - 1];
			n--;
		}
	}
	return (dest);
}
