/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:08:04 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/24 15:55:33 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "../includes/Contact.hpp"
#include <iostream>

class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);

	Contact	Add(void);
	void	Search(int nbr);
	void	Exit(void);
	int		ChooseAction(void);

	char 	*cmd;
	int		nbr_ct;
	Contact *tab;
};

#endif