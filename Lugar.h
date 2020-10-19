/*
  Archivo: Lugar.h
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-09-1
  Fecha última modificación: 2019-09-02
  Licencia: GNU-GPL
*/

/*
  Clase: Lugar
  Atributos:Nombre, vector de individuos.
    - Puedo preguntarle el nombre
    - Puedo preguntarle si algun individuo se come a otro
    - Puedo añadir un individuo
    - puedo obtener a un individuo de diferentes formas

  Relaciones: lugar conoce a individuo
*/

#include "Individuo.h"
#include <vector>
#include <iostream>
using namespace std;

#ifndef LUGAR_H
#define LUGAR_H

class Lugar 
{
  protected:
    string nombre;
    vector <Individuo*> individuos;

  public:

     //constructor
     Lugar(string lugar_nombre);

     //destructor
     ~Lugar();

      //sabe quien se puede comer a quien
      void verificarCadenaAlimenticia ();

      //obtiene el nombre del lugar
      string obtieneNombre();

      //añade a un individuo 
      void add_individuo(Individuo *individuo);
    
      //obtiene un individuo mediante su posición
      Individuo obtenerIndividuo(int index);
      
      //obtiene un individuo mediante su atributo letraDeOrden
      bool encontrarIndividuo(string letra);

      //arroja el tamaño del vector
      int size();

      //descargar 
      void descargarIndividuo();

      //verifica si está el robot
      void robotEsta();

      //eliminar individuo
      void eliminarIndividuo();
    

};

#else
class Lugar;
#endif