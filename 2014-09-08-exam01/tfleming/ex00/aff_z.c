/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/05 18:12:10 by exam              #+#    #+#             */
/*   Updated: 2014/09/05 18:16:41 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char a;
	char b;

	a = 'z';
	b = '\n';
	write(1, &a, 1);
	write(1, &b, 1);
	return (0);
}
