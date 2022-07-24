/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:00:12 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/23 21:05:58 by nadesjar         ###   ########.fr       */
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

int	    PhoneBook::ChooseAction(void)
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
