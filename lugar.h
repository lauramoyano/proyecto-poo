/*
  Archivo: orilla.h
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-09-1
  Fecha última modificación: 2019-09-02
  Licencia: GNU-GPL
*/
/*
  Clase: orilla
  Atributos:
    - Puedo preguntarle la placa.
    - Puedo preguntarle si puede cargar un objeto.
    - Puedo preguntarle la carga transportada.
  Relaciones: orilla es un Lugar
*/

#include "individuo.h"
#include <iostream>
using namespace std;

#ifndef LUGAR_H
#define LUGAR_H

class lugar 
{
    protected:
    string name;
    vector <individuo>  individuos;

    public:

    lugar(string name);

    //sabe quien se puede comer a quien
    virtual void quienSeCome ();



    //añade a un individuo 
    virtual void add_individuo(individuo);
  
  

};
#else
class lugar;
#endif