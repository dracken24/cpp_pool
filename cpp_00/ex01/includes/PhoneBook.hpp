/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:08:04 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/25 22:04:35 by nadesjar         ###   ########.fr       */
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

	void	Add(int i);
	void	Search(int nbr_ct);
	void	Exit(void);
	int		ChooseAction(void);
	void	InitRep(void);
	void	AfficheContact(char *str);
	void	ListContacts(int nbr_ct);
	void	PutStrRight(char *str);
	void	SearchContacts(PhoneBook *repertoire, int nbr_ct);

private:
	char 	*cmd;
	Contact *tab;
};

#endif