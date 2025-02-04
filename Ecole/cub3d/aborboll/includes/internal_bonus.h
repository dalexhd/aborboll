/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   internal_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 16:11:17 by aborboll          #+#    #+#             */
/*   Updated: 2020/10/25 18:14:14 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERNAL_BONUS_H
# define INTERNAL_BONUS_H

/*
** Definimos los valores de las direcciones de los rayos
*/
# define NORTH 1
# define SOUTH 2
# define EAST 3
# define WEST 4

/*
** Define errors
*/
# define ERR_MALLOC "malloc() error: failed to allocate bytes!"
# define ERR_ARGV_CHECK "Please check your arguments"
# define ERR_CUB_S_MISS "There's something missing in your cub file!"
# define ERR_FILE_OP "Error opening \"%s\" file!"
/*
** Define Validation errors
*/
# define ERR_FL_DEF "Floor already defined!"
# define ERR_CE_DEF "Ceiling already defined!"
# define ERR_AFTER_MAP "%s can't be set after map!"
# define ERR_TEX_LOADED "%s defined multiple times!"
# define ERR_MAP_MISSING "Map could not be found at the .cub file!"
/*
** Music close command (sorry for that shit command spliting :-P)
*/
# define MUSIC_1 "ps aux | grep 'aplay ./assets/sounds/main_game.wav'"
# define MUSIC_2 " | tr -s ' ' | cut -d ' ' -f 2 | head -n 1"
#endif
