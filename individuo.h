/*
  Archivo: individuo.h
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-09-1
  Fecha última modificación: 2019-09-02
  Licencia: GNU-GPL
*/
/*
  Clase: individuo
  Atributos:
    - Puedo preguntarle si es un robot
    - Puedo saber a quien se come
    - Puedo decirle que salte
  Relaciones: Ninguna
*/

#include <iostream>
using namespace std;

#ifndef INDIVIDUO_H
#define INDIVIDUO_H

class individuo
{
    protected:
    string name;
    vector <individuo> puede_comer;

    public:
    
    //constructor
    individuo(string name);

    //destructor
    ~individuo();

    //a quien se puede comer
    void depredador(vector <individuo> puede_comer);

    //a quien se puede comer
    void eresRobot();



};

#else
class individuo;
#endif