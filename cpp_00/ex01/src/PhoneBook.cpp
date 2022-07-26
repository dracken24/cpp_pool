/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:00:12 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/25 23:04:36 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

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

void	PhoneBook::InitRep(void)
{
	this->tab = new Contact[8];
}

int		PhoneBook::ChooseAction(void)
{
	int		ret;

	ret = 0;
	this->cmd = new char[64];
	std::cout << "Veillez choisir une action: ADD, SEARCH, EXIT:"<< std::endl;
	std::cin >> this->cmd;

	if (strcmp(this->cmd, "ADD") == 0)
		ret = 1;
	else if (strcmp(this->cmd, "SEARCH") == 0)
		ret = 2;
	else if (strcmp(this->cmd, "EXIT") == 0)
		ret = 3;
	else
		return (0);
	
	delete[] this->cmd;
	return (ret);
}

void	PhoneBook::Add(int i)
{
	Contact	cont;
	
	this->tab[i - 1] = cont.InitContact(i);
	return;
}

void	PhoneBook::Search(int nbr_ct)
{
	char *str = new char[32];

	this->ListContacts(nbr_ct);

	std::cout << "Enter The index for see all the information" << std::endl;
	std::cin >> str;
	
	this->AfficheContact(str, nbr_ct);
	
	delete[] str;
	return;
}

void	PhoneBook::AfficheContact(char *str, int nbr_ct)
{
	int nbr = atoi(str);
	
	std::cout << nbr <<std::endl;
	if (nbr > 0 && nbr < 9 && nbr < nbr_ct)
	{
		std::cout << std::endl;
		std::cout << "First Name  : " << this->tab[nbr - 1].ReturnFname() << std::endl;
		std::cout << "Last Name   : " << this->tab[nbr - 1].ReturnLname() << std::endl;
		std::cout << "Nickname    : " << this->tab[nbr - 1].ReturnNick() << std::endl;
		std::cout << "Phone       : " << this->tab[nbr - 1].ReturnPhone() << std::endl;
		std::cout << "Dark Secret : " << this->tab[nbr - 1].ReturnSecret() << std::endl;
		std::cout << std::endl;
		return;
	}
	else
	{
		std::cout << std::endl;
		std::cout << "--Wrong index--" <<std::endl;
		std::cout << std::endl;
	}
	return;
}

void	PhoneBook::ListContacts(int nbr_ct)
{
	int	i = -1;

	while (++i < nbr_ct - 1)
	{
		std::cout << std::endl;
		std::cout << this->tab[i].ReturnIndex() << "  |  ";
		this->PutStrRight(this->tab[i].ReturnFname());
		std::cout << "  |  ";
		this->PutStrRight(this->tab[i].ReturnLname());
		std::cout << "  |  ";
		this->PutStrRight(this->tab[i].ReturnNick());
	}
	std::cout << std::endl;
	std::cout << std::endl;
	return;
}

void	PhoneBook::PutStrRight(char *str)
{
	int i = strlen(str);
	int	k = -1;
	int r = 10 - i + 1;
	while (--r > 0)
		std::cout << ' ';
	i = -1;
	while (++k < 10 && ++i < (int)strlen(str))
		std::cout << str[i];
	return;
}

void	PhoneBook::SearchContacts(PhoneBook *repertoire, int nbr_ct)
{
	repertoire->Search(nbr_ct);
}
