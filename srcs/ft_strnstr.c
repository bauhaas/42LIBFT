/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 22:52:13 by bahaas            #+#    #+#             */
/*   Updated: 2020/11/04 16:44:58 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char *str_big;
	char *str_little;

	str_big = (char *)big;
	str_little = (char *)little;
	i = 0;
	if (!little)
		return (str_big);
	while(str_big[i] && i < len)
	{
		j = 0;
		while(big[j + i] == little[j] && i + j < len)
		{
			j++;
			if(str_little[j] == '\0')
				return(&str_big[i]);
		}
		i++;
	}
	return(NULL);
}

int main(void)
{
	char* big = "Bonjour tout le monde";
	char *little = "to";
	int len = 12;
	printf("%s\n", ft_strnstr(big, little, len));
	return (0);
}
