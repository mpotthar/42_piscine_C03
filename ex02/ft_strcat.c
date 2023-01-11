/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 11:15:06 by mpotthar          #+#    #+#             */
/*   Updated: 2022/08/09 16:48:45 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
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
// 	char s2[20] = "Hello456";
// 	printf("function: %s\n", ft_strcat(s1, s2));
// 	char s1s[20] = "Hello123";
// 	char s2s[20] = "Hello456";
// 	printf("original: %s", strcat(s1s, s2s));
// }