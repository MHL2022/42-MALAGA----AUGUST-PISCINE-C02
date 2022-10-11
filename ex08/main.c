/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:06:30 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/23 10:07:54 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str);

int	main(void)
{
	char	str[] = "HELENA Y OLIVIA";

	ft_strlowcase(str);
	printf("%s", str);
}

