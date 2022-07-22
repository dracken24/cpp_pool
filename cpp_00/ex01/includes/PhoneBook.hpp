/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:08:04 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/21 21:07:22 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);

	int		ChooseAction(void);

	// void	*tab;
	Contact *tab;
	char 	*cmd;
	int		nbr_ct;
};

#endif