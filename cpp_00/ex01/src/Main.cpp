/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:09:41 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/21 21:16:53 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"

// int	ChooseAction(void);

int	main(void)
{
	// Contact instance;
	PhoneBook	repertoire;
	Contact		contact;
	int			cmd;

	repertoire.nbr_ct = 0;
	repertoire.tab = new Contact[8];
	std::cout << "test" << std::endl;
	while (repertoire.nbr_ct >= 0)
	{
		std::cout << "test_02" << std::endl;
		cmd = repertoire.ChooseAction();
		if (cmd == 1)
		{
			std::cout << "Add" << std::endl;
			repertoire.tab[repertoire.nbr_ct] = contact.Add();
			repertoire.nbr_ct++;
		}
		else if (cmd == 2)
		{
			std::cout << "Search" << std::endl;
			contact.Search(&repertoire);
		}
		else if (cmd == 3)
		{
			std::cout << "Exit" << std::endl;
			return (0);
		}
	}
	std::cout << "test_03" << std::endl;
	delete[] repertoire.tab;
	// instance.Add();
	// std::cin >> Contact::f_name;
	// std::cout << "Vous avez entrez: " << test << std::endl;
	return (0);
}


