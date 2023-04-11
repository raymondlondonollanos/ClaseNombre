
#include <string>
#pragma once
#ifndef NAME_H
#define NAME_H



namespace name
{
	class Nombres
	{
	private:
		std::string m_firstName;
		std::string m_midleName;
		std::string m_lastName;
		std::string m_salutation;
		//utilizacion de las referencias para almacenar los string
		std::string& firstName{ m_firstName };
		std::string& midleName{ m_midleName };
		std::string& lastName{ m_lastName };
		std::string& salutation{ m_salutation };

	public:
		//constructor por defecto
		//default = Nombres;
		//constructor que toma cuatro parametros declarados
		Nombres(const std::string& firstName , const std::string& midleName, const std::string& lastName , const std::string& salutation);

		//asignacion de datos mediante las refencias a la variable string 
		void dameFirstName(const std::string& firtsName);

		void dameMidleName(const std::string& midleName);

		void dameLastName(const std::string& lastName);

		void dameSalutation(const std::string& salutation);
		
		//Asignacion de getter para las variables miembro

		const std::string& getFirstName();

		const std::string& getMidleName();

		const std::string& getLastName();

		const std::string& getSalutation();

	};

}

#endif // !NAME_H

