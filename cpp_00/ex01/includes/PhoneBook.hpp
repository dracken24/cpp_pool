/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:08:04 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/28 13:32:27 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "../includes/Contact.hpp"
#include <iostream>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void	PutStrRight(char *str);

class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);

	void	Search(int nbr_ct) const;
	void	Add(int del_ct, int i);
	void	Exit(void);
	
	int		ChooseAction(void);
	
	void	SearchContacts(PhoneBook *repertoire, int nbr_ct) const;
	void	AfficheContact(char *str, int nbr_ct) const;
	void	ListContacts(int nbr_ct) const;
	void	PutStrRight(char *str) const;
	void	DeleteContact(int nbr_ct);
	void	InitRep(void);

private:
	char 	*cmd;
	Contact *tab;
};

#endif