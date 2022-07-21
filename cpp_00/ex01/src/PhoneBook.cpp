/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:00:12 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/21 14:56:52 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    std::cout << "Construct PhoneBook" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "Destruct PhoneBook" << std::endl;
}

char    *PhoneBook::RetCmd(void)
{
    return (this->cmd);
}

int	    PhoneBook::ChooseAction(void)
{
	int		ret;

	ret = 0;
	this->cmd = new char[64];
	std::cout << "Veillez choisir une action: Add, Search, Exit"<< std::endl;
	std::cin >> this->cmd;

	if (this->cmd == "Add" || this->cmd = "add")
		ret = 1;
	else if (this->cmd == "Search" || "search")
		ret = 2;
	else if (this->cmd == "Exit" || "exit")
		ret = 3;
	
	delete[] this->cmd;
	return (ret);
}
