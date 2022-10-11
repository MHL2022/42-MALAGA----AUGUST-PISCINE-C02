/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:15:07 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/22 19:37:58 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main (void)
{
	char	*src = "Noche en el museo";
	char	dest [30];
	int n;

	n = 5;
	printf("%s",ft_strncpy(dest, src, n));
	return (0);
}
