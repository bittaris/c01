/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:18:46 by ibittar           #+#    #+#             */
/*   Updated: 2024/03/13 11:51:03 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = temp_a / *b;
	*b = temp_a % *b;
}

/*int	main(void)
{
	
	int 	a;
	int	b;

	a = 10;
	b = 5;

	ft_ultimate_div_mod(&a, &b);

	printf("%d\n", a);
	printf("%d", b);
	return 0;
}*/
