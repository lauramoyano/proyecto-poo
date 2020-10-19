/*
  Archivo: Jugador.h
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-09-1
  Fecha última modificación: 2019-09-02
  Licencia: GNU-GPL
*/
/*
  Clase: Jugador 
  Atributos: 
  Funcionalidades:
    - Puedo preguntarle si ya gano
    - Puedo imprimir en pantalla
    - Puedo agregar a un individuo
    -
    -
  Relaciones: conoce todas las instacias de lugar, conoce individuo 
*/

#include "Individuo.h"
#include "Barca.h"
#include "Orilla.h"
#include "Lugar.h"

#include <vector>
#include <iostream>
using namespace std;

#ifndef JUGADOR_H
#define JUGADOR_H


class Jugador 
{

  protected:
    vector <Lugar*> lugares;
		//int accion(string accion);
  
  public:
    //constructor
    Jugador();
    
    //inicar
    void empezar();

    //encuentra el lugar donde se encuentra el individuo
    Lugar lugarDelIndividuo(string letra);

    //mueve al individuo cuando lo encuentra
    void accionMoverIndividuo(string letra);

    //pregunta al lugar si se comieron a alguien
    string terminarJuego();

    //Jugador imprime en pantalla 
    void mostrarPantalla();

    //pregunta a orilla derecha si ya se logro la mision
    void ganaron();

     
    //Jugador añade Individuos
    void agregarIndividuo(Individuo *individuo);


};

#else
class Jugador;
#endif