/*
  Archivo: Individuo.h
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-10-10
  Fecha última modificación: 2020-10-30
  Licencia: GNU-GPL
*/
/*
  Clase: Individuo
  Atributos: nombre,un puntero a la presa que come, letraDeOrden.
  Funcionalidades:
    - Puedo preguntarle el nombre
    - puedo agregarle espacios al nombre
    - Puedo preguntarle la orden
    - Puedo saber a quien se come
    - Puedo saber si se come a alguien
  Relaciones: Conoce al individuo que se puede comer
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
    Individuo *presa;

  public:
    
    //constructor
    Individuo(string name, string letraDeOrden, Individuo *puedo_comer);

    //constructor
    Individuo(string name, string letraDeOrden);

    //constructor 3
    Individuo();

    //destructor
    ~Individuo();

    //obtiene el nombre del Individuo
    string obtenerNombre();

    //obtiene el nombre del Individuo y le agrega los espacios faltantes 
    string obtenerNombre(int longitudMax);

    //obtiene el comando al que obedece
    string obtenerLetra();

    //obtiene la presa
    Individuo *obtenerPresa();

    //verifica si el Individuo se come a otro 
    bool ustedCome(Individuo individuo);


};

#else
class Individuo;
#endif
