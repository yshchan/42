/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychauhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 19:31:19 by ychauhan          #+#    #+#             */
/*   Updated: 2017/09/01 11:01:41 by ychauhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char d;

	d = '0';
	while (d <= '9')
	{
		ft_putchar(d);
		d++;
	}
	return ;
}
