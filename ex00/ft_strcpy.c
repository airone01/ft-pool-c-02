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

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	while ((*dest++ = *src++) != '\0');
	return (dest);
}

int	main(void)
{
	char	*src;
	char	dest[10];

	src = "hello";
	printf("src: %s\n", src);
	ft_strcpy(dest, src);
	printf("src: %s, dest: %s\n", src, dest);
}
