/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:02:34 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/26 19:54:02 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
public:
	Contact(void);
	~Contact(void);
	Contact	InitContact(int i);
	char	*ReturnFname(void);
	char	*ReturnLname(void);
	char	*ReturnNick(void);
	char	*ReturnPhone(void);
	char	*ReturnSecret(void);
	int		ReturnIndex(void);
	void	DeleteContact(void);

private:
	char	*first_name;
	char	*last_name;
	char	*nickname;
	char	*phone;
	char	*d_secret;
	int		*index;
};

#endif