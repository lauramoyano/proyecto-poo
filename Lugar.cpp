/*
  Archivo: Lugar.cpp
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-09-1
  Fecha última modificación: 2019-09-02
  Licencia: GNU-GPL
*/

#include <string>

#include "Lugar.h"
#include "Individuo.h"

using namespace std;


Lugar::Lugar(string lugar_nombre) 
{
  //individuos = vector <Individuo*>();
	 nombre = lugar_nombre;
}

Lugar::~Lugar()
{
  //no hace nada
}

string Lugar::obtieneNombre() 
{
	 return this->nombre;
}


void Lugar::add_individuo(Individuo *individuo) 
{
   individuos.push_back(individuo);
}

Individuo Lugar::obtenerIndividuo(int index) 
{
    return *individuos[index];
}



bool Lugar::encontrarIndividuo(string letra)
{
  for(int cualIndividuo = 0; cualIndividuo<individuos.size(); cualIndividuo++)
  {
    if(letra == individuos[cualIndividuo]->obtenerLetra())
      return true;    
  }
  return false;
}


int Lugar::size() 
{
	return individuos.size();
}