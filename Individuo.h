/*
  Archivo: Individuo.h
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-09-1
  Fecha última modificación: 2019-09-02
  Licencia: GNU-GPL
*/
/*
  Clase: Individuo
  Atributos: nombre, presa que come, letraDeOrden.
  Funcionalidades:
    - Puedo preguntarle el nombre
    - Puedo preguntarle la orden
    - Puedo saber a quien se come
    -
  Relaciones: Ninguna
*/

#include <vector>
#include <iostream>
using namespace std;

#ifndef INDIVIDUO_H
#define INDIVIDUO_H

class Individuo
{
    protected:
    string nombre;
    string letraDeOrden;
    Individuo *puedo_comer;

    public:
    
    //constructor
    Individuo(string name, string letraDeOrden, Individuo *puedo_comer);

    //constructor
     Individuo(string name, string letraDeOrden);

    //destructor
    ~Individuo();

    //obtiene el nombre del Individuo
    string obtenerNombre();

    //obtiene el comando al que obedece
    string obtenerLetra();

    //verifica si el Individuo se come a otro 
    bool ustedCome(Individuo individuo);


};

#else
class Individuo;
#endif
