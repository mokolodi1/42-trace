/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 18:05:52 by exam              #+#    #+#             */
/*   Updated: 2014/09/12 18:09:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int			main(void)
{
	char n1;
	char n2;

	n1 = 'z';
	n2 = '\n';
	write(1, &n1, 1);
	write(1, &n2, 1);
	return (0);
}
