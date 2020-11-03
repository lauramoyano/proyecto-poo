/*
  Archivo: Lugar.cpp
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-10-10
  Fecha última modificación: 2019-10-30
  Licencia: GNU-GPL
*/

#include "Lugar.h"
#include <iostream>
using namespace std;


Lugar::Lugar(string lugar_nombre ) 
{
	 nombre = lugar_nombre;
}

//elimina los puntos a individuo en cada lugar
Lugar::~Lugar()
{
  for(int i=0; i<individuos.size(); i++)
  { 
    delete individuos[i];
    individuos[i]=nullptr;
  }
}

Individuo* Lugar::verificarCadenaAlimenticia()
{
  for(int i=0; i<individuos.size(); i++)
  {
    Individuo *presa = individuos[i]->obtenerPresa();
    if(presa != nullptr)
    {
      for(int j=0; j<individuos.size(); j++)
      {
        if(presa==individuos[j])
        {
          return individuos[i]; //retorna el individuo que depredador
        }
      }
    }     
  }
  return nullptr;
}

string Lugar::obtieneNombre() 
{
 return this->nombre;
}

string Lugar::obtieneNombre(int longitudMax)
{
  int diferencia= longitudMax - nombre.length();

  return nombre + string(diferencia, ' ');//agrega los espacios que le faltan para ser igual a la longitudMax

}


void Lugar::add_individuo(Individuo *individuo) 
{
   individuos.push_back(individuo);

}


Individuo* Lugar::obtenerIndividuo(int index) 
{
  if(index>=individuos.size())
  {
    Individuo *noHay = nullptr;
    
    return noHay;
  }
  return individuos[index];
}



Individuo* Lugar::obtenerIndividuo(string letra)
{
  for(int cualIndividuo = 0; cualIndividuo<individuos.size(); cualIndividuo++)
  {
    if(letra == individuos[cualIndividuo]->obtenerLetra())
    {    
     return individuos[cualIndividuo];
    }
  }
  Individuo *noHay = nullptr;
  return noHay;
 
}

int Lugar::size() 
{
	return individuos.size();
}


void Lugar::eliminarIndividuo(Individuo *individuo)
{
 for(int i=0;i<individuos.size();i++)
 {
   if(individuos[i]->obtenerNombre()==individuo->obtenerNombre())
   {
     individuos[i]=nullptr;
     individuos.erase(individuos.begin()+i);
   }
 }
  
}

Lugar* Lugar::verVecino()
{
  return nullptr;
}

void Lugar::cambiarVecino()
{
  //funcion que emplea polimorfismo
}


void Lugar::conocerBarca(Lugar *barca)
{
  //funcion que emplea polimorfismo
}

bool Lugar::hayEspacio()
{
  return true;
}

bool Lugar::robotEsta()
{
  for(int cual =0;cual<individuos.size();cual++)
  {
    if(individuos[cual]->obtenerLetra()=="R")
    {
      return true;
      break;
    }
  }
  return false;
  
}