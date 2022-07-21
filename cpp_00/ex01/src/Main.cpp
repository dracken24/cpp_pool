/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:09:41 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/21 14:46:15 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"

// int	ChooseAction(void);

int	main(void)
{
	// Contact instance;
	PhoneBook	rep;
	int			cmd;
	int			i = -1;
	
	while (++i)
	{
		cmd = rep.ChooseAction(&rep);
		if (cmd == 1)
		{
			std::cout << "Add" << std::endl;
		}
		else if (cmd == 2)
		{
			std::cout << "Search" << std::endl;
		}
		else if (cmd == 3)
		{
			std::cout << "Exit" << std::endl;
		}
	}
	// instance.Add();
	// std::cin >> Contact::f_name;
	// std::cout << "Vous avez entrez: " << test << std::endl;
	return (0);
}


