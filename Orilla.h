/*
  Archivo: Orilla.h
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-09-1
  Fecha última modificación: 2019-09-02
  Licencia: GNU-GPL
*/
/*
  Clase: Orilla
  Atributos:
  Funcionalidades:
    - Puedo preguntarle 
    - Puedo preguntarle 
    - Puedo preguntarle 
  Relaciones: orilla es un Lugar
*/

#include "Lugar.h"

#ifndef ORILLA_H
#define ORILLA_H

class Orilla : public Lugar 
{
  protected:
    
   public:
     //constructor 
     Orilla (string name);

     ~Orilla();

     //verifica la cadena alimenticia especificamente en las orillas
     void verificarCadenaAlimenticia ();




};

#else
class Orilla;
#endif