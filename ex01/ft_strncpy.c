/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <erwann.lagouche@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:54:25 by elagouch          #+#    #+#             */
/*   Updated: 2024/09/12 19:18:21 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char		*rest;

	rest = dest;
	i = 0;
	while ((i < n) && ((*dest++ = *src++) != '\0'))
		i++;
	if (i >= n)
		*dest = '\0';
	return (rest);
}

// int	main(void)
// {
// 	char	*src;
// 	char	dest[20];
// 	char	*rest;
//
// 	src = "hello world hello world hello world";
// 	printf("src: %s\n", src);
// 	rest = ft_strncpy(dest, src, 8);
// 	// ft_strncpy(dest, src, 2);
// 	printf("src: %s, dest: %s, rest: %s\n", src, dest, rest);
// }
