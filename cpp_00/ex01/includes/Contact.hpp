/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:02:34 by nadesjar          #+#    #+#             */
/*   Updated: 2022/07/16 12:13:57 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
public:
	Contact();
	void	Add();
	void	Search();
	void	Exit();
	;

private:
	char	*f_name;
	char	*l_name;
	char	*nickname;
	int		phone;
	char	*d_secret;
};

#endif