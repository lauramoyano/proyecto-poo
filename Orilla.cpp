/*
  Archivo: Barca.cpp
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-10-10
  Fecha última modificación: 2020-10-30
  Licencia: GNU-GPL
*/

#include "Orilla.h"

Orilla::Orilla(string nombre):Lugar(nombre)
{
  nombre=nombre;
  vecino=nullptr;  
}


Orilla::~Orilla()
{
  //ya se está eliminando en la clase base 
}


void Orilla::conocerBarca(Lugar *barcaNueva)
{
  barca=barcaNueva;
}


Lugar* Orilla::verVecino()
{
  return vecino;
}


void  Orilla::cambiarVecino()
{
  if(vecino==nullptr)
  {
    vecino=barca;
  }
  else if(vecino==barca)
  {
    vecino=nullptr;
  }
  
}

Lugar* Orilla::verBarca()
{
  return barca;
}