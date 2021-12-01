/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 23:01:47 by slucas            #+#    #+#             */
/*   Updated: 2021/11/15 14:07:45 by slucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		//write(1, &str[i], 1);
		i++;
	}
    write(1, str, i);
}

int main(void)
{
    char str[] = "Bonjour";
    ft_putstr(str);
    return (0);
}
