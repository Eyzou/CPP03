/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:59:57 by ehamm             #+#    #+#             */
/*   Updated: 2024/07/08 11:00:00 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FLAGTRAP_H
#define FLAGTRAP_H


#include <string>
#include <iostream>

class FlagTrap : public ClapTrap {

    public:
        FlagTrap();
        FlagTrap(std::string name);
        FlagTrap(const FlagTrap &copy);
        ~FlagTrap();

        void highFivesGuys();
};

#endif //FLAGTRAP_H
