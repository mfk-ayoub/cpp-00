/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 06:41:02 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/01/31 05:02:20 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
private:
	std::string FirstName;
	std::string LastName;
	std::string PhoneNumber;
	std::string NickName;
	std::string DarkestSecret;
	
public:
	Contact();
	~Contact();
	void Setcontact();
	void DisplayContact();
};

#endif