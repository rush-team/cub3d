/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_casting.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btanir <btanir@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:49:33 by btanir            #+#    #+#             */
/*   Updated: 2024/08/22 15:02:01 by btanir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	mlx_create(t_game *game)
{
	game->mlx = mlx_init();
	if (game->mlx)
	{
		// free ekle;
		exit(1);
	}
	game->win = mlx_new_window(game->mlx, SCREEN_WIDTH, SCREEN_HEIGHT, "cub3d");
	if (game->win)
	{
		// free ekle;
		exit(1);
	}
    
    mlx_loop(game->mlx);
}