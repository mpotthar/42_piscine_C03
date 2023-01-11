/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 11:15:11 by mpotthar          #+#    #+#             */
/*   Updated: 2022/08/09 16:49:07 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char s1[20] = "Hello123";
// 	char s2[20] = "123abc";
// 	unsigned int nb = 3;
// 	printf("function: %s\n", ft_strncat(s1, s2, nb));
// 	char s1_s[20] = "Hello123";
// 	char s2_s[20] = "123abc";
// 	unsigned int nb_s = 3;
// 	printf("original: %s", strncat(s1_s, s2_s, nb_s));
// }