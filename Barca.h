/*
  Archivo: Barca.h
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-09-1
  Fecha última modificación: 2019-09-02
  Licencia: GNU-GPL
*/
/*
  Clase: Barca
  Atributos:
  Funcionalidades:
    - Puedo preguntarle si está llena
    - Puedo moverla
    - Puedo preguntarle la posicion
    - Además de todos los metodos de lugar
  Relaciones: es parecido a un lugar, barca conoce a las orillas.
*/

#include <iostream>
#include "Lugar.h"
#include "Orilla.h"

#ifndef BARCA_H
#define BARCA_H


class Barca : public Lugar
{
   protected:
   
    Orilla *orillaAdyacente;
    Orilla *orillaDelOtroLado;


   public:
     //constructor
     Barca(string nombre, Orilla *orillaAdyacente, Orilla *orillaDelOtroLado);

    
     //verifica si está llena
     bool estaLlena ();

     //verifica la posicion
     string dondeEsta();

     //mover la barca
     void muevete();
     
     //verifica el nombre de la orilla en que está la barca
     string verificarOrillaAdyacente();

     //cambiar los punteros a las orillas
     void cambiarOrillas();

};
#else
class Barca;
#endif