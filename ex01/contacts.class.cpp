/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <tscasso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:41:07 by tscasso           #+#    #+#             */
/*   Updated: 2024/01/26 16:59:57 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.class.hpp"
#include "phonebook.class.hpp"

Contacts::Contacts(void)
{
	return;
}

Contacts::~Contacts(void)
{
	return;
}

std::string	Contacts::getName(void)
{
	return (this->name);
}

std::string	Contacts::getLastName(void)
{
	return (this->lastname);
}

std::string	Contacts::getNickname(void)
{
	return (this->nickname);
}

std::string	Contacts::getNumber(void)
{
	return (this->number);
}

std::string	Contacts::getSecret(void)
{
	return (this->secret);
}

void	Contacts::print_contact(void)
{
	std::cout << "name: " << getName() << std::endl;
	std::cout << "lastname: " << getLastName() << std::endl;
	std::cout << "name: " << getNickname() << std::endl;
	std::cout << "number: " << getNumber() << std::endl;
	std::cout << "secret: " << getSecret() << std::endl;
}

void	Contacts::add_to_book(Contacts &contact, PhoneBook &book, int index)
{
	book.addContact(contact, index);
}

std::string	Contacts::getInput(const std::string &prompt)
{
	std::string input = "";

	std::cout << prompt;
	if (std::getline(std::cin, input) && !input.empty())
		return input;
	else
	{
		std::cout << "Empty input try again" << std::endl;
		return getInput(prompt);
	}
}

void	Contacts::create_contact(PhoneBook &book, int index)
{
	Contacts 	new_contact;
	std::string	input;

	new_contact.name = getInput("Enter the name: ");
	new_contact.lastname = getInput("Enter the lastname: ");
	new_contact.nickname = getInput("Enter the nickname: ");
	new_contact.number = getInput("Enter the phone number: ");
	new_contact.secret = getInput("Enter secret: ");
	new_contact.add_to_book(new_contact, book, index);
	return;
}