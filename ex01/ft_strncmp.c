/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 11:15:09 by mpotthar          #+#    #+#             */
/*   Updated: 2022/08/10 07:57:16 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char *s1 = "Hello";
// 	char *s2 = "Hello";
// 	unsigned int n = 5;
// 	printf("function: %d\n", ft_strncmp(s1, s2, n));
// 	printf("original: %d", strncmp(s1, s2, n));
// }