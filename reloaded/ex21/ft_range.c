/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 12:32:38 by yufli             #+#    #+#             */
/*   Updated: 2024/12/23 08:05:25 by yufli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*array;

	if (min >= max)
		return (NULL);
	len = max - min;
	array = malloc(len * sizeof(int));
	if (array == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < len)
		{
			array[i] = min + i;
			i++;
		}
	}
	return (array);
}
