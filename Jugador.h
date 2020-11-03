/*
  Archivo: Jugador.h
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-10-10
  Fecha última modificación: 2020-10-30
  Licencia: GNU-GPL
*/
/*
  Clase: Jugador 
  Atributos: vector de punteros a los lugares que están en el juego, logitud maxima del nombre impreso en el tablero, cantidad de individuos en el juego.
  Funcionalidaes:
    - Puedo empezar el juego
    - Puedo agregar un lugar al vector
    - Puedo agregar un individuo al juego de dos formas 
    - Puedo saber el lugar del individuo
    - Sabe cuando se pierde
    - Sabe cuando se gana 
    - Puedo imprimir en pantalla
    - Mueve los individuos 
    - Mueve la barca
    - Calcula linea por linea del juego
    - Calcula las columnas del juego
  Relaciones: conoce a lugar, por tanto todas las instacias que heredan de lugar (orillas, barcas). 
*/

#include "Barca.h"
#include "Orilla.h"
#include <vector>
#include <iostream>
using namespace std;

#ifndef JUGADOR_H
#define JUGADOR_H


class Jugador 
{

  protected:
    vector <Lugar*> lugares;
    int longitudMaxNombre;
    int cantidadIndividuos;
   
  public:
    //constructor
    Jugador(Orilla *inicial, Orilla *ultima, Barca *barca);

    //agrega un lugar al vector verificando el tamaño del nombre
    void agregarLugar(Lugar *lugar);
    
    //inica el juego
    void empezar();

    //encuentra el lugar donde se encuentra el individuo
    int lugarDelIndividuo(string letra);

    //mueve al individuo cuando lo encuentra
    void accionMoverIndividuo(string letra);

    //pregunta al lugar si se comieron a alguien
    bool alguienHaMuerto();

    //Jugador imprime en pantalla las columnas y las filas
    void mostrarPantalla();

    //pregunta a orilla derecha si ya se logro la mision
    bool ganar();

    //mueve la barca
    void accionMoverBarca();
     
    //Jugador añade Individuos a un lugar
    void agregarIndividuo(Individuo *individuo, Lugar* lugarDestino);
    
    //Jugador añade Individuos al lugar inicial 
    void agregarIndividuo(Individuo *individuo);

    //calcula cada linea del juego en la pantalla para cada lugar
    string calcularLinea(int iterador);
    
    //calcula las columnas del juego
    string calcularColumnas(string columna1, string columna2, string columna3);

    //obtiene los espacios de acuerdo a la longitud maxima
    string obtenerEspacios();

    //obtiene el nombre del individuo
    string obtenerNombreIndividuo(Individuo *individuo);

};

#else
class Jugador;
#endif