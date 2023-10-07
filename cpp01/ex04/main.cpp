/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:35:42 by shilal            #+#    #+#             */
/*   Updated: 2023/10/06 16:54:55 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filestream.hpp"

bool    is_Directory(char *path)
{
    struct stat directory;
    if (stat(path ,&directory) == -1){
        std::cerr << "Error : Path dosnt exist" << std::endl;
        return (false);
    }
    if (S_ISDIR(directory.st_mode)){
        std::cerr << "Error : is Directory" << std::endl;
        return (false);
    }
    return (true);
}

int main(int ac, char **av)
{
    if (ac != 4)
        std::cerr << "Error : enter 3 Parameters: [filename] [string1] [string2]" << std::endl;
    else{
        if (is_Directory(av[1]))
            replace r(av[1], av[2], av[3]);
    }
}