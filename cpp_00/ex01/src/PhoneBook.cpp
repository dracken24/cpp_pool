/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:00:12 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/28 13:50:24 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void	PhoneBook::DeleteContact(int nbr_ct)
{
	int	i = -1;

	while (++i < nbr_ct)
		this->tab[i].DeleteContact();
	delete[] this->tab;
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
	{
		std::cout << std::endl;
		std::cout << "--Wrong entry--" << std::endl;
		std::cout << std::endl;
	}
	
	delete[] this->cmd;
	return (ret);
}

void	PhoneBook::Add(int del_ct, int i)
{
	if (del_ct < 9)
		this->tab[i - 1].InitContact();
	this->tab[i - 1].ChangeContact();
	return;
}

void	PhoneBook::Search(int nbr_ct) const
{
	char *str = new char[32];

	this->ListContacts(nbr_ct);

	std::cout << "Enter The index for see all the information" << std::endl;
	std::cin >> str;
	
	this->AfficheContact(str, nbr_ct);
	
	delete[] str;
	return;
}

void	PhoneBook::AfficheContact(char *str, int nbr_ct) const
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

void	PhoneBook::ListContacts(int nbr_ct) const
{
	int	i = -1;

	while (++i < nbr_ct - 1)
	{
		std::cout << std::endl;
		std::cout << i + 1 << "  |  ";
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

void	PhoneBook::PutStrRight(char *str) const
{
	int ct;
	int i = strlen(str);
	int	k = -1;
	int r = 10 - i + 1;
	ct = 1;
	
	while (--r > 0)
		std::cout << ' ';
	i = -1;
	while (++k < 10 && ++i < (int)strlen(str))
	{
		if (strlen(str) == 10)
		{
			std::cout << str;
			break;
		}
		if (ct >= 10)
			std::cout << '.';
		else
			std::cout << str[i];
		ct++;
	}
	return;
}

void	PhoneBook::SearchContacts(PhoneBook *repertoire, int nbr_ct) const
{
	repertoire->Search(nbr_ct);
}
