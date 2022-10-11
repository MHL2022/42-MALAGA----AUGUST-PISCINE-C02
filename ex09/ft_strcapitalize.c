/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marialedesmabasualdo <maledesm@studen      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:24:28 by marialede         #+#    #+#             */
/*   Updated: 2022/08/23 22:50:26 by marialede        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalize(char *str)
{
	int	a;	
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	a = 1;
	while (str [a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
			str[a] = str[a] + 32;
			if (str[a] >= 'a' && str[a] <= 'z')
			{
				if(!(str[a-1] >= 'a' && str[a-1] <= 'z'))
				{
					if(!(str[a-1] >= '0' && str[a-1] <= '9'))
					{
						if(!(str[a-1] <= 'Z' && str[a-1] >= 'A'))
						{
							str[a] = str[a] - 32;
						}
					}
				}
			}
			a++;	
	}
	return (str);
}
