/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 22:52:12 by bahaas            #+#    #+#             */
/*   Updated: 2020/10/30 16:42:40 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <bsd/string.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t src_length;
	size_t dst_length;

	i = 0;
	src_length = ft_strlen(src);
	dst_length = ft_strlen(dst);
	if(size <= dst_length)
		return (src_length + size);
	while(src[i] && i + dst_length < size - 1)
	{
		dst[i + dst_length] = src[i];
		i++;
	}
	dst[i + dst_length] = '\0';
	return (src_length + dst_length);
}

int main()
{
	char tab[] = "bonjour";
	char tab2[] = "tout le monde";
	printf("%lu\n", strlcat(tab, tab2, 25));
	printf("%lu\n", ft_strlcat(tab, tab2, 25));
	return 0;
}
