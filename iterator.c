/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:56:06 by albaud            #+#    #+#             */
/*   Updated: 2023/03/26 16:30:33 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	init_iterator(int iter[], int size)
{
	iter[--size] = -1;
	while (--size >= 0)
		iter[size] = 0;
}

int	iter(int size, int iter[], int maxes[])
{
	while (--size >= 0)
	{
		iter[size] += 1;
		if (iter[size] < maxes[size])
			return (1);
		iter[size] = 0;
	}
	return (0);
}
