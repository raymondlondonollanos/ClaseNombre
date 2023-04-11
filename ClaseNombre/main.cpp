//***************************************************************************//
// Plantilla Proyecto Vacio C++ v1.0 (21/02/2023)                            //
//***************************************************************************//
//                                                                           //
// General   >  Dir Salida       > $(SolutionDir)\Bin                        //
//			 >  Dir Intermedio   > $(SolutionDir)\Tmp                        //
//			 >  Nombre Destino	 > $(ProjectName)         (Release / 64)     //
//			 >  Nombre Destino   > $(ProjectName)_d       (Debug / 64)       //
//			 >  Nombre Destino   > $(ProjectName)_32      (Release / 32)     //
//			 >  Nombre Destino   > $(ProjectName)_32d     (Debug / 32)       //
//                                                                           //
// Avanzado  >  Juego de caract  > Multibyte                                 //
// C/C++     >  General			 > Comp multiproc        > Si                //
//			 >  Optimizacion     > Tamaño o velocidad    > Codigo radido     //
//			 >  Gen de codigo    > Bib en tiempo de ej   > MT (Release)      //
//                               > Bib en tiempo de ej   > MTd (Debug)       //
//                               > Modelo de punt f1     > Rapido            //
//           >  Idioma           > Estandar del leng     > Ultimo borrador   //
//                                                                           //
//***************************************************************************//
#include <iostream>
#include "Name.h"
#include <string>

int main()
{

	std::string nombre = "Raymond ";
	std::string& refNombre { nombre };
	std::string segundoNombre = "Emilio ";
	std::string& refSegundoNombre{ segundoNombre };
	std::string FirstApellido = "Londono ";
	std::string& refFirstApellido{ FirstApellido };
	std::string saludo= " Hola a todos!";
	std::string& refSaludo{ saludo };

	//el constructor pide valores por referencia
	name::Nombres nombre1(refNombre, refSegundoNombre, refFirstApellido, refSaludo);

	//nombre1.dameFirstName(refNombre);

	std::cout << "El nombre introducido es: " << nombre1.getFirstName() << nombre1.getMidleName() << nombre1.getLastName() << nombre1.getSalutation() << std::endl;

	std::cout << "\nIngresa un nombre: ";
	std::cin >> refNombre;

	name::Nombres nombre2(refNombre, refSegundoNombre, refFirstApellido, refSaludo);

	std::cout <<"\nEl nombre ingresado es: " << nombre2.getFirstName() << std::endl;


	system("pause");
	

	return 0;
}