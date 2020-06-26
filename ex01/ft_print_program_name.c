/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smnisi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:21:22 by smnisi            #+#    #+#             */
/*   Updated: 2020/06/26 14:21:29 by smnisi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char const *argv[])
{
	int i;

	i = 0;
	if (argc > 0)
	{
		while (argv[0][i] != '\0')
		{
			ft_putchar(argv[0][i]);
			++i;
		}
		ft_putchar('\n');
	}
	return (0);
}
