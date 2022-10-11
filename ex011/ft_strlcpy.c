/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:13:08 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/24 11:52:05 by maledesm         ###   ########.fr       */
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

