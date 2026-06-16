/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robinpham <robinpham@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:33:46 by robinpham         #+#    #+#             */
/*   Updated: 2026/05/07 08:11:28 by robinpham        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	target;
	int		i;

	target = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == target)
			return ((char *)&s[i]);
		i++;
	}
	if (target == '\0')
		return ((char *)&s[i]);
	return (0);
}


// int	main(void)
// {
// 	const char *str = "Hello, World!";
// 	int c = 'o';
// 	char *result = ft_strchr(str, c);

// 	if (result)
// 		printf("Le caractère '%c' a été trouvé à la position : %ld\n", c, result - str);
// 	else
// 		printf("Le caractère '%c' n'a pas été trouvé.\n", c);
// 	return (0);
// }
