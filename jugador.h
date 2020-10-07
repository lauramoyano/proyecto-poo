/*
  Archivo: jugador.h
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-09-1
  Fecha última modificación: 2019-09-02
  Licencia: GNU-GPL
*/
/*
  Clase: jugador 
  Atributos: 
  Funcionalidades:
    - Puedo preguntarle si ya gano
    - Puedo preguntarle si 
    - Puedo preguntarle la carga transportada.
  Relaciones: conoce todas las instacias de lugar, conoce individuo 
*/

#include "individuo.h"
#include "jugador.h"
#include "lugar.h"

#include <iostream>
using namespace std;

#ifndef JUGADOR_H
#define JUGADOR_H


class jugador 
{

  public:
  //pregunta al lugar si se comieron a alguien
  string perdieron();

  //pregunta si ya se logro la mision
  //string ganaron(vector <lugar> orillaD);


};

#else
class jugador;
#endif