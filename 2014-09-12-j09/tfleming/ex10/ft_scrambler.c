/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 12:06:09 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/12 12:21:01 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int holder;

	holder = ***a;
	***a = *b;
	*b = ****d;
	****d = *******c;
	*******c = holder;
}
