/*
  Archivo: Jugador.cpp
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-09-1
  Fecha última modificación: 2019-09-02
  Licencia: GNU-GPL
*/

#include <iostream>
#include "Jugador.h"


using namespace std;

Jugador::Jugador()
{
    
}

Lugar Jugador::lugarDelIndividuo(string letra)
{
  for (int i = 0; i < lugares.size(); i++) 
  {
    if(lugares[i]->encontrarIndividuo(letra))
    
      return *lugares[i];
  
  }
  Lugar *vacio = nullptr;

   return *vacio;
}


void Jugador::accionMoverIndividuo(string letra) 
{
  
 
}


void Jugador::mostrarPantalla() 
{
  
	  cout << "|"+ lugares[0]->obtieneNombre() + "|"+ lugares[1]->obtieneNombre() + "|    \t|"+ lugares[2]->obtieneNombre() + "  |\n";
  

  for (int i = 0; i < lugares[0]->size(); i++) 
  {

	 cout << "| " + lugares[0]->obtenerIndividuo(i).obtenerNombre()+ "  \t|    \t|    \t|        \t|\n";
  }
	

}

void Jugador::empezar() 
{
	string action = "";
	while (true) 
  {
		this-> mostrarPantalla();
		cout << "Que deseas hacer?:";

		getline(cin, action);
		/*switch (this->accion(action)) 
    {
			case 0:
				return  ;
		}*/
	}
}



void Jugador::agregarIndividuo(Individuo *individuo)
{
	lugares[0]->add_individuo(individuo);
}
