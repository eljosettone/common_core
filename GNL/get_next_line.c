/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fannyallegre <fannyallegre@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:08:51 by fannyallegr       #+#    #+#             */
/*   Updated: 2026/05/01 17:40:15 by fannyallegr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_next_line(int fd)
{
//     1. Lire par blocs (BUFFER_SIZE) et accumuler dans stash
//    → s'arrêter dès qu'on trouve \n dans stash, ou dès que read renvoie 0 (EOF)
//    → MAIS si stash contient déjà un \n dès le départ, sauter cette étape
        static char     *stash;
        char            *buff;
        

//    2. Si stash est NULL ou vide après lecture → retourner NULL (EOF ou erreur)
//    3. Extraire la ligne = tout ce qui est dans stash jusqu'au \n inclus
//    (ou tout stash s'il n'y a pas de \n = dernière ligne sans retour)
//    4. Mettre à jour stash = ce qui reste APRÈS le \n
//    (NULL si rien ne reste)
//    5. Retourner la ligne extraite
}