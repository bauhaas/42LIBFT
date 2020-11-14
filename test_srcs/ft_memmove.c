/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 22:52:11 by bahaas            #+#    #+#             */
/*   Updated: 2020/10/13 21:15:10 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*tmp_src;
	char		*tmp_dest;

	i = 0;
	tmp_src = (char * )src;
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

int			main()
{
	int			data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int			arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	printf( "data array to move (src array) :\n");
	for ( int i=0; i<10; i++ ) {
		printf( "%d ", data[i] );
	}
	printf("\n");
	printf( "My destination my_array:\n");
	for ( int i=0; i<10; i++ ) {
		printf( "%d ", arr[i] );
	}
	printf("\n");
	void * source = (void *) data;
	void * destination = (void *) ( arr );
	size_t size = 10 * sizeof( int );
	ft_memmove( destination, source, size );
	printf( "My destination my_array after calling ft_memmove:\n");
	for ( int i=0; i<10; i++ ) {
		printf( "%d ", arr[i] );
	}
	printf("\n");
	return 0;
}
