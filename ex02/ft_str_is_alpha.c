/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:39:37 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/24 17:29:31 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a]< 'a' || str[a] > 'z') && (str[a] < 'A' || str[a] > 'Z')) 
				return (0);
		a++;
	}
	return (1);
}

