/*
  Archivo: Lugar.h
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-10-10
  Fecha última modificación: 2020-10-30
  Licencia: GNU-GPL
*/

/*
  Clase: Lugar
  Atributos:Nombre, vector de punteros a individuos.
  Funcionalidades:
    - Puedo preguntarle el nombre y añadirle espacios
    - Puedo saber si algun individuo se come a otro
    - Puedo añadir un individuo al lugar
    - puedo obtener a un individuo de diferentes formas
    - Puedo saber cuantos individuos hay
    - Puedo preguntar si el individuo está ahí por la letra
    - Puedo saber si  el robot se encuentra ahí
    - Puedo descargar a un individuo
    - Puedo dejar de conocer a un dividuo
    - Puedo saber el lugar vecino 

  Relaciones: lugar conoce a individuo por tanto conoce a todas las instancias de la clase individuo
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
    virtual ~Lugar();

    //sabe quien se puede comer a quien
    virtual Individuo* verificarCadenaAlimenticia ();

    //obtiene el nombre del lugar
    virtual string obtieneNombre();

    //obtiene el nombre del lugar y le agrega los espacios faltantes 
    virtual string obtieneNombre(int longitudMax);

    //añade a un individuo 
    virtual void add_individuo(Individuo *individuo);

    //obtiene un individuo mediante su posición
    virtual Individuo* obtenerIndividuo(int index);
      
    //obtiene un individuo mediante su atributo letraDeOrden
    virtual Individuo* obtenerIndividuo(string letra);

    //arroja el tamaño del vector
    virtual int size();

    //verifica si está el robot
    virtual bool robotEsta();

    //eliminar individuo
    virtual void eliminarIndividuo(Individuo *individuo);

    //verifica el nombre de la orilla en que está la barca
    virtual Lugar* verVecino();

    //cambiar los punteros a las orillas
    virtual void cambiarVecino();

    //añadir a una barca
    virtual void conocerBarca(Lugar *barca);

    //verifica si un lugar tiene espacio para otro individuo
    virtual bool hayEspacio ();
    
};

#else
class Lugar;
#endif