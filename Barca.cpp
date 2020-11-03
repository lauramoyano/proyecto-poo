/*
  Archivo: Barca.cpp
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-10-10
  Fecha última modificación: 2020-30-10
  Licencia: GNU-GPL
*/

#include"Barca.h"

Barca::Barca(string nombre, Lugar *orillaAdyacente, Lugar *orillaDelOtroLado):Lugar(nombre)
{
  vecino=orillaAdyacente;
  otraOrilla=orillaDelOtroLado;
}

Barca::~Barca()
{
  //ya se está eliminando en la clase base
}


bool Barca::hayEspacio()
{ 
  if(individuos.size()>= 2)
  {
    return false;
  }
  else
  {
    return true;
  }   
}



void Barca::cambiarVecino()
{
  Lugar *aux1 = nullptr;
  Lugar *aux2 = nullptr;
  aux1=vecino;
  aux2=otraOrilla;

  vecino=aux2;
  otraOrilla=aux1;

}


Lugar* Barca::verVecino()
{
  return vecino;
}

