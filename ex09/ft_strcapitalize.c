/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elagouch <erwann.lagouche@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:33:00 by elagouch          #+#    #+#             */
/*   Updated: 2024/09/15 16:15:22 by elagouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	is_alphanum(char str)
{
	if ((str >= '0' && str <= '9')
		|| (str >= 'A' && str <= 'Z')
		|| (str >= 'a' && str <= 'z'))
		return (1);
	return (0);
}

int	capital(char str)
{
	const char	offset = 'a' - 'A';

	if (str >= 'a' && str <= 'z')
		return (str - offset);
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		in_word;
	char	prev;

	i = 0;
	in_word = 0;
	prev = ' ';
	while (str[i] != '\0')
	{
		if (is_alphanum(str[i]) == 1 && is_alphanum(prev) == 0 && in_word == 0)
		{
			in_word = 1;
			str[i] = capital(str[i]);
		}
		else if (is_alphanum(str[i]) == 0 && in_word == 1)
			in_word = 0;
		prev = str[i];
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	entry[] = "salut, comment tu vas ?
// 		42mots quarante-deux; cinquante+et+un";
// 	char	*res;
//
// 	printf("entry: \"%s\"\n", entry);
// 	res = ft_strcapitalize (entry);
// 	printf("entry: \"%s\"\nres  : \"%s\"\n", entry, res);
// }
