/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 22:52:11 by bahaas            #+#    #+#             */
/*   Updated: 2020/11/05 16:02:51 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*my_array;

	i = 0;
	my_array = (char *)s;
	while (i < n)
	{
		my_array[i] = c;
		i++;
	}
	//faux juste test pr mon gramde
	return(s);
}
