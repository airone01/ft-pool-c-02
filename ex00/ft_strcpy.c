/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <erwann.lagouche@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:54:25 by elagouch          #+#    #+#             */
/*   Updated: 2024/09/12 14:42:44 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	char	*rest;

	rest = dest;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (rest);
}

// int	main(void)
// {
// 	char	*src;
// 	char	dest[10];
// 	char	*rest;
//
// 	src = "hello";
// 	printf("src: %s\n", src);
// 	rest = ft_strcpy(dest, src);
// 	printf("src: %s, dest: %s, rest: %s\n", src, dest, rest);
// }
