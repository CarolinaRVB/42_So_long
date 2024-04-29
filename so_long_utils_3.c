/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:24:02 by crebelo-          #+#    #+#             */
/*   Updated: 2023/11/28 21:24:02 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_animation_right(t_game *game, int x, int x_pre, int y)
{
	display_count(game, ++game->move_count);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->b, x_pre, y);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->p1, x, y);
	mlx_do_sync(game->mlx_ptr);
	usleep(TIME);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->b, x_pre, y);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->p2, x, y);
	mlx_do_sync(game->mlx_ptr);
	usleep(TIME);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->b, x_pre, y);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->p, x, y);
}

void	move_animation_left(t_game *game, int x, int x_pre, int y)
{
	display_count(game, ++game->move_count);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->b, x_pre, y);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->p1l, x, y);
	mlx_do_sync(game->mlx_ptr);
	usleep(TIME);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->b, x_pre, y);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->p2l, x, y);
	mlx_do_sync(game->mlx_ptr);
	usleep(TIME);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->b, x_pre, y);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->p, x, y);
}

void	move_animation_up(t_game *game, int x, int y, int y_pre)
{
	display_count(game, ++game->move_count);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->b, x, y_pre);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->p5, x, y);
	mlx_do_sync(game->mlx_ptr);
	usleep(TIME);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->b, x, y_pre);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->p6, x, y);
	mlx_do_sync(game->mlx_ptr);
	usleep(TIME);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->b, x, y_pre);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->p, x, y);
}

void	move_animation_down(t_game *game, int x, int y, int y_pre)
{
	display_count(game, ++game->move_count);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->b, x, y_pre);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->p5, x, y);
	mlx_do_sync(game->mlx_ptr);
	usleep(TIME);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->b, x, y_pre);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->p6, x, y);
	mlx_do_sync(game->mlx_ptr);
	usleep(TIME);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->b, x, y_pre);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->p, x, y);
}

void	display_count(t_game *game, int count)
{
	int		mean;
	char	*str;

	str = ft_itoa(count);
	mean = game->map->width / 2;
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->t, mean * PIXEL_SIZE, 0 * PIXEL_SIZE);
	mlx_string_put(game->mlx_ptr, game->win_ptr,
		(mean * PIXEL_SIZE) + 20, (1 * PIXEL_SIZE) - 5, 0xFFFFFF, str);
	free(str);
}
