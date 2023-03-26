/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:56:06 by albaud            #+#    #+#             */
/*   Updated: 2023/03/26 16:12:43 by albaud           ###   ########.fr       */
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

void	bad_test(void)
{
	static int	it[3];

	it[0] = -1;
	while (++it[0] < 100)
	{
		it[1] = -1;
		while (++it[1] < 100)
		{
			it[2] = -1;
			while (++it[2] < 100)
			{
				printf("x:\t%i, y:\t%i, z:\t%i\n", it[0], it[1], it[2]);
			}
		}
	}
}


void	test(void)
{
	static int	it[3];
	static int	maxes[3] = {4, 4, 4};

	init_iterator(it, 3);
	while (iter(3, it, maxes))
		printf("x:\t%i, y:\t%i, z:\t%i\n", it[0], it[1], it[2]);
}

int	main(void)
{
	test();
}

//./a.out  0,33s user 0,54s system 3% cpu 23,625 total
//./a.out  0,34s user 0,57s system 3% cpu 25,084 total
//./a.out  0,34s user 0,56s system 3% cpu 24,721 total

//./a.out  0,34s user 0,56s system 3% cpu 25,093 total
//./a.out  0,34s user 0,55s system 3% cpu 23,038 total
//./a.out  0,33s user 0,53s system 3% cpu 24,385 total