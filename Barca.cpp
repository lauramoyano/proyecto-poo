/*
  Archivo: Barca.cpp
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-09-1
  Fecha última modificación: 2019-09-02
  Licencia: GNU-GPL
*/

#include"Barca.h"

Barca::Barca(string nombre, Orilla *orillaAdyacente, Orilla *orillaDelOtroLado):Lugar(nombre)
{
  nombre = nombre;
}

bool Barca::estaLlena()
{ 
    if(individuos.size()> 2)
    {
      return true;
    }
    else
    {
      return false;
    }   
}

string Barca::verificarOrillaAdyacente()
{
  return orillaAdyacente->obtieneNombre();
}


void Barca::cambiarOrillas()
{
  Orilla *aux1 = nullptr;
  Orilla *aux2 = nullptr;
  aux1=orillaAdyacente;
  aux2=orillaDelOtroLado;

  orillaAdyacente=aux2;
  orillaDelOtroLado=aux1;

}