/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:02:34 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/28 13:47:28 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string.h>

class Contact
{
public:
	Contact(void);
	~Contact(void);
	
	void	InitContact(void);
	void	ChangeContact(void);
	
	char	*ReturnSecret(void) const;
	char	*ReturnPhone(void) const;
	char	*ReturnFname(void) const;
	char	*ReturnLname(void) const;
	char	*ReturnNick(void) const;
	
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