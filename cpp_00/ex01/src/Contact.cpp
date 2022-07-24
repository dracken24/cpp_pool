/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:09:27 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/23 21:08:57 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

#include <string.h>

Contact::Contact()
{
	// std::cout << "Construct Contact" << std::endl;
	this->first_name = new char[64];
	this->last_name = new char[64];
	this->nickname = new char[64];
	this->d_secret = new char[128];
	this->phone = new char[16];
	return;
}

Contact::~Contact(void)
{
	// std::cout << "Destruct Contact" << std::endl;
	return;
}

Contact	Contact::Add(void)
{
	Contact	cont;

	cont.first_name = new char[64];
	cont.last_name = new char[64];
	cont.nickname = new char[64];
	cont.d_secret = new char[128];
	cont.phone = new char[16];

	std::cout << "Enter First Name: " << std::endl;
	std::cin >> cont.first_name;
	std::cout << "Enter Last Name: " << std::endl;
	std::cin >> cont.last_name;
	std::cout << "Enter a Nickname: " << std::endl;
	std::cin >> cont.nickname;
	std::cout << "Enter a Phone number: " << std::endl;
	std::cin >> cont.phone;
	std::cout << "Just for fun, what is your darkest secret?? " << std::endl;
	std::cin >> cont.d_secret;

	return (cont);
}

void	Contact::Search(int nbr)
{
	char *str = new char[32];
	int		i = -1;

	std::cout << "What is the first or last name of the contact you are looking for ?" << std::endl;
	std::cin >> str;
	
	while (++i < nbr)
	{
		if (strcmp(str, this->tab[i].first_name) == 0 
				|| strcmp(str, this->tab[i].last_name) == 0)
		{
			std::cout << this->tab[i].first_name << std::endl;
			std::cout << this->tab[i].last_name << std::endl;
			std::cout << this->tab[i].nickname << std::endl;
			std::cout << this->tab[i].phone << std::endl;
			std::cout << this->tab[i].d_secret << std::endl;
			break;
		}
		else
			std::cout << "Contact not found" << std::endl;
	}
	
	delete[] str;
	return;
}
