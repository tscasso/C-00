/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <tscasso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:34:24 by tscasso           #+#    #+#             */
/*   Updated: 2024/01/26 18:04:03 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>

#include "Contacts.hpp"


class PhoneBook
{
public:

	PhoneBook(void);
	~PhoneBook(void);

	void	search_contact(void);
	void	print_contact(void);
	void	printTable(void);
	void	add_contact(int index, PhoneBook &book);
	void 	addContact(Contacts &contact, int index);

private:

	Contacts list[8];
};

#endif
