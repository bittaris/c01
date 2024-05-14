/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:51:01 by ibittar           #+#    #+#             */
/*   Updated: 2024/03/12 14:29:35 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int a = 9;
	int b = 3;
	int div_res; 
	int mod_res;

	ft_div_mod(a, b, &div_res, &mod_res);

	printf("%d\n", div_res);
	printf("%d\n", mod_res);

	return 0;
}*/
