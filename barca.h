/*
  Archivo: barca.h
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-09-1
  Fecha última modificación: 2019-09-02
  Licencia: GNU-GPL
*/
/*
  Clase: barca
  Atributos:
    - Puedo preguntarle si está llena
    - Puedo moverla
  Relaciones: es parecido a un lugar
*/

#include <iostream>
#include "lugar.h"

class barca : public lugar
{
    public:
    
    //verifica si el robot está
    bool estaLlena ();
}
