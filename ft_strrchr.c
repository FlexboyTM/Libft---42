/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robinpham <robinpham@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 19:22:52 by robinpham         #+#    #+#             */
/*   Updated: 2026/05/04 02:53:59 by robinpham        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*
int main()
{
	const char *str = "Hello, World!";
	char c = 'o';
	char *result = ft_strrchr(str, c);
	if (result)
		printf("Last occurrence of '%c' found at index: %ld\n", c, result - str);
	else
		printf("Character '%c' not found in the string.\n", c);
	return 0;
}
*/