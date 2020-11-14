/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 22:52:11 by bahaas            #+#    #+#             */
/*   Updated: 2020/10/13 21:10:35 by bahaas           ###   ########.fr       */
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
}

int			main()
{
	int		array [] = { 54, 85, 20, 63, 21 };
	int		prray [] = { 54, 85, 20, 63, 21 };
	size_t	size = sizeof( int ) * 5;
	int									length;

	/* Display the initial values */
	for ( length=0; length<5; length++) {
		printf( "%d ", array[ length ] );
	}
	printf( "\n" );

	/* Reset the memory bloc */
	memset( array, 0, size );
	ft_memset( prray, 0, size);
	/* Display the new values */
	for ( length=0; length<5; length++) {
		printf( "%d ", array[ length ] );
	}
	printf( "\n" );
	for ( length=0; length<5; length++) {
		printf( "%d ", prray[ length ] );
	}
	printf( "\n" );
	return 0;
}
