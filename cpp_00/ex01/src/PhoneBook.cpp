/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:00:12 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/24 16:00:55 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include<string.h>

PhoneBook::PhoneBook(void)
{
	// std::cout << "Construct PhoneBook" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "Destruct PhoneBook" << std::endl;
	return;
}

int		PhoneBook::ChooseAction(void)
{
	int		ret;

	ret = 0;
	this->cmd = new char[64];
	std::cout << "Veillez choisir une action: Add, Search, Exit:"<< std::endl;
	std::cin >> this->cmd;

	if (strcmp(this->cmd, "Add") == 0)
		ret = 1;
	else if (strcmp(this->cmd, "Search") == 0)
		ret = 2;
	else if (strcmp(this->cmd, "Exit") == 0)
		ret = 3;
	else
		return (0);
	
	delete[] this->cmd;
	return (ret);
}

Contact	PhoneBook::Add(void)
{
	Contact	cont;

	cont.first_name = new char[64];
	cont.last_name = new char[64];
	cont.nickname = new char[64];
	cont.d_secret = new char[128];
	cont.phone = new char[16];

	std::cout << std::endl;
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
	std::cout << std::endl;
	
	return (cont);
}

void	PhoneBook::Search(int nbr)
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
			std::cout << std::endl;
			std::cout << "First Name  : " << this->tab[i].first_name << std::endl;
			std::cout << "Last Name   : " << this->tab[i].last_name << std::endl;
			std::cout << "Nickname    : " << this->tab[i].nickname << std::endl;
			std::cout << "Phone       : " << this->tab[i].phone << std::endl;
			std::cout << "Dark Secret : " << this->tab[i].d_secret << std::endl;
			std::cout << std::endl;
			return;
		}
	}
	std::cout << std::endl;
	std::cout << "Contact not found" << std::endl;
	std::cout << std::endl;

	delete[] str;
	return;
}

