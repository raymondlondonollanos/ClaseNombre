#include "Name.h"
#include <string>
#include <iostream>


namespace name
{
	//se pasa por referencia constante para que no se puedan modificar
	name::Nombres::Nombres( const std::string & firstName, const std::string & midleName, const std::string & lastName, const std::string & salutation)
	{
		this->firstName = firstName;
		this->midleName = midleName;
		this->lastName = lastName;
		this->salutation = salutation;
		
	}
		
	
	

	void Nombres::dameFirstName(const std::string& firstName)
	{
		this->firstName = firstName;
	}

	void Nombres::dameMidleName(const std::string& midleName)
	{
		this->midleName = midleName;
	}

	void Nombres::dameLastName(const std::string& lastName)
	{
		this->lastName = lastName;
	}

	void Nombres::dameSalutation(const std::string& salutation)
	{
		this->salutation = salutation;
	}

	const std::string& Nombres::getFirstName()
	{
		return this->firstName;
	}

	const std::string& Nombres::getMidleName()
	{
		// TODO: insert return statement here
		return this->midleName;
	}

	const std::string& Nombres::getLastName()
	{
		// TODO: insert return statement here
		return this->lastName;
	}

	const std::string& Nombres::getSalutation()
	{
		// TODO: insert return statement here
		return this->salutation;
	}

	
}
