/*
  Archivo: Barca.h
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-10-10
  Fecha última modificación: 2020-30-10
  Licencia: GNU-GPL
*/
/*
  Clase: Barca
  Atributos: conoce el lugar vecino y el lugar que se encuentra al otro lado del rio.
  Funcionalidades:
    - Puedo preguntarle si tiene espacio
    - Puedo saber cual es el lugar vecino
    - Puedo cambiarle el lugar vecino
    - Además de todos los metodos de lugar
  Relaciones: barca es un lugar
*/

#include <iostream>
#include "Lugar.h"
#include "Orilla.h"

#ifndef BARCA_H
#define BARCA_H


class Barca : public Lugar
{
  protected:
   
    Lugar *vecino;
    Lugar *otraOrilla;

  public:
    //constructor
    Barca(string nombre, Lugar *orillaAdyacente, Lugar *orillaDelOtroLado);

    //Destructor
    ~Barca();
    
    //verifica si hay espaio para otro individuo
    bool hayEspacio ();

    //mover la barca
    void muevete();
     
    //cambiar los punteros a las orillas
    void cambiarVecino();

    //obtiene el lugar vecino
    Lugar *verVecino();

};

#else
class Barca;
#endif