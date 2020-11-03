/*
  Archivo: Orilla.h
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-10-10
  Fecha última modificación: 2020-10-30
  Licencia: GNU-GPL
*/

/*
  Clase: Orilla
  Atributos:Un puntero al lugar que se encuentra al lado o es vecino, un puntero a un lugar que se mueve en el rio(barca)
  Funcionalidades:
    - Puedo conocer una barca que llegara a la orilla.
    - Puedo obtener la barca.
    - Puedo cambiar el lugar vecino
    - Puedo obtener el lugar vecino
    - Además de heredar todos los metodos de lugar
  Relaciones: orilla es un Lugar.
*/

#include "Lugar.h"
#ifndef ORILLA_H
#define ORILLA_H

class Orilla : public Lugar 
{
  protected:
    Lugar *barca;  
    Lugar *vecino;
  public:
    //constructor 
    Orilla (string name);

    //Destructor
    ~Orilla();

    //cambiar los punteros a las orillas
    void cambiarVecino();

    // conoce la la nueva posción de barca
    void conocerBarca(Lugar *barcaNueva);

    //obtiene el lugar vecino
    Lugar *verVecino();

    //puede saber donde está la barca
    Lugar *verBarca();



};

#else
class Orilla;
#endif