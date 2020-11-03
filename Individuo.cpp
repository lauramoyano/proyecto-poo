/*
  Archivo: Individuo.cpp
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-10-10
  Fecha última modificación: 2020-10-30
  Licencia: GNU-GPL
*/

#include"Individuo.h"

Individuo :: Individuo (string name, string orden, Individuo *puedo_comer)
{
  letraDeOrden = orden;
  nombre = name;
  presa=puedo_comer;
  
}

Individuo::Individuo(string name, string orden)
{
  letraDeOrden = orden;
  nombre = name;
  presa = nullptr;
 
}

Individuo::~Individuo()
{
  //no hace nada
}

//obtiene el nombre del Individuo
string Individuo::obtenerNombre ()
{
  return nombre;
}

//obtiene el nombre del Individuo y le agrega espacios
string Individuo::obtenerNombre(int longitudMax)
{
  int diferencia= longitudMax - nombre.length();

  return nombre + string(diferencia, ' ');//agrega los espacios que le faltan para ser igual a la longitudMax

}

//obtiene la letra de orden del Individuo
string Individuo::obtenerLetra()
{
  return letraDeOrden;
}

//obtiene la presa de los individuos que se comen a otro
Individuo* Individuo::obtenerPresa()
{
  return presa;
}


//verifica si el individuo se come a otro 
bool ustedCome(Individuo individuo)
{
  Individuo *noTienePresa =nullptr;

  if(individuo.obtenerPresa() != noTienePresa)
  {
    return true;
  }
  return false;
}