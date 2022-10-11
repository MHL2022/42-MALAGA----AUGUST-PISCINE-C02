/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marialedesmabasualdo <maledesm@studen      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 02:58:17 by marialede         #+#    #+#             */
/*   Updated: 2022/08/23 03:05:18 by marialede        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	char str[] = "12i3dhftanTT%&& ";
	printf("%d", ft_str_is_printable(str));
}
