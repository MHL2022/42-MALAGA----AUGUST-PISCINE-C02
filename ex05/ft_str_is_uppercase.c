/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marialedesmabasualdo <maledesm@studen      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 02:04:39 by marialede         #+#    #+#             */
/*   Updated: 2022/08/23 02:33:44 by marialede        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int a;

	a = 0;
	while(str[a] != '\0')
	{
		if ((*str < 'A') || (*str > 'Z'))
			return (0);
		a++;
	}
	return (1);
}

