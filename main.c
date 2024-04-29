/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:35:26 by crebelo-          #+#    #+#             */
/*   Updated: 2023/12/07 17:04:04 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_game	game;

	if (ac != 2)
		return (error_exit("Error\nWrong number of arguments"));
	if (ft_checkfileext(av[1], ".ber") != 0)
		return (error_exit("Error\nWrong file extension"));
	if (checkiffileopens(av[1], O_RDONLY) != 0)
		return (error_exit("Error\nProblem with file"));
	if (build_map(&game, av[1]) != 0)
		return (1);
	if (check_map(&game) != 0)
		return (1);
	if (initiate_game(&game) != 0)
		return (1);
	return (0);
}
