/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:40:46 by mpotthar          #+#    #+#             */
/*   Updated: 2022/08/09 16:55:03 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i1;
	unsigned int	i2;
	unsigned int	rem;

	i1 = 0;
	i2 = 0;
	while (dest[i2] != '\0')
		i2++;
	rem = size - i2;
	if (rem <= 0 || size == 0)
		return (size + ft_strlen(src));
	while (src[i1] != '\0' && rem - 1 > 0)
	{
		dest[i2] = src[i1];
		i1++;
		i2++;
	}
	dest[i2] = '\0';
	return (i2);
}

// #include <stdio.h>
// #include <string.h>
// 
// int	main(void)
// {
// 	char s1[20] = "Hello123";
// 	char s2[20] = "1";
// 	unsigned int size = 10;
// 	// only for uncommenting one pair of printf commands.
// 	printf("function ret..: %u\n", ft_strlcat(s1, s2, size));
// 	printf("function dest.: %s\n", s1);
// 	printf("original ret..: %lu\n", strlcat(s1, s2, size));
// 	printf("original dest.: %s\n", s1);
// }