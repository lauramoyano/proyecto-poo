/*
  Archivo: Individuo.cpp
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-09-1
  Fecha última modificación: 2019-09-02
  Licencia: GNU-GPL
*/

#include"Individuo.h"

Individuo :: Individuo (string name, string orden, Individuo *puedo_comer)
{
  letraDeOrden = orden;
  nombre = name;
  puedo_comer = puedo_comer;
  
}

Individuo::Individuo(string name, string letraDeOrden)
{
  letraDeOrden = letraDeOrden;
  nombre = name;
 
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

//obtiene la letra de orden del Individuo
string Individuo::obtenerLetra()
{
  return letraDeOrden;
}