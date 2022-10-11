/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:18:34 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/22 18:49:55 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char src[] = "Noche en el museo";
	char dest[30];
	
	printf("%s", ft_strcpy(dest, src));
	return (0);
}
