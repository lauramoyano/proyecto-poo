/*
  Archivo: Jugador.cpp
  Autor:David Velasco -Laura Moyano -Laura Suarez
  <laura.moyano@correounivalle.edu.co - velasco.david@correounivalle.edu.co -
  laura.liseth.suarez@correounivalle.edu.co
  Fecha creación: 2020-10-10
  Fecha última modificación: 2020-10-30
  Licencia: GNU-GPL
*/

#include <iostream>
#include "Jugador.h"

using namespace std;

Jugador::Jugador(Orilla *inicial, Orilla *ultima, Barca *barca)
{
   cantidadIndividuos=0;//inicializa los individuos en 0
   longitudMaxNombre=0;//inicializa la longitud en 0

   agregarLugar(inicial);
   agregarLugar(barca);
   agregarLugar(ultima);
  
}

void Jugador::agregarLugar(Lugar *lugar)
{
  if(lugar->obtieneNombre().size() > longitudMaxNombre)
  {
    longitudMaxNombre = lugar->obtieneNombre().size();
  }

  lugares.push_back(lugar);
}


int Jugador::lugarDelIndividuo(string letra )
{
  for (int i = 0; i < lugares.size(); i++) 
  {
    if(lugares[i]->obtenerIndividuo(letra) != nullptr)
    {
      return i;
    }
  }
  return -1; 
}


void Jugador::accionMoverIndividuo(string letra) 
{
  if(letra == "")
  {
    return;
  }

  int indice = lugarDelIndividuo(letra);
  if(indice < 0)
  {
    return;
  }
  
  if(lugares[indice]->verVecino()==nullptr)
  {
    cout << "No puedes hacer ese movimiento \n";
    return;
  }

  if(lugares[indice]->verVecino()->hayEspacio())
  {
    Individuo *individuoAMover = lugares[indice]->obtenerIndividuo(letra);
    agregarIndividuo(individuoAMover, lugares[indice]->verVecino());
    lugares[indice]->eliminarIndividuo(individuoAMover); 
  }

}

void Jugador::accionMoverBarca()
{
  if(lugares[1]->robotEsta())
  {
    lugares[0]->cambiarVecino();
    lugares[2]->cambiarVecino();
    lugares[1]->cambiarVecino();
  }
}

void Jugador::mostrarPantalla() 
{

 cout << calcularColumnas(lugares[0]->obtieneNombre(longitudMaxNombre), lugares[1]->obtieneNombre(longitudMaxNombre), lugares[2]->obtieneNombre(longitudMaxNombre));//imprime las columnas

  for (int i = 0; i < cantidadIndividuos; i++)
  {
    cout << calcularLinea(i);//imprime las lineas
  }
}

string Jugador::calcularLinea(int iterador)
{
  Individuo *individuoIzquierda = lugares[0]->obtenerIndividuo(iterador);
  Individuo *individuoBarca = lugares[1]->obtenerIndividuo(iterador);
  Individuo *individuoDerecha = lugares[2]->obtenerIndividuo(iterador);

  //acomoda los nombres de los individuos en cada lugar
  string nombreEnIzquierda = obtenerNombreIndividuo(individuoIzquierda);
  string nombreEnBarca = obtenerNombreIndividuo(individuoBarca);
  string nombreEnDerecha = obtenerNombreIndividuo(individuoDerecha);


  return calcularColumnas(nombreEnIzquierda, nombreEnBarca, nombreEnDerecha);//organiza las columnas con los nombres ya acomodados
}


string Jugador::calcularColumnas(string columna1, string columna2, string columna3)
{
  string columnaBarca;
  if(lugares[1]->verVecino()==lugares[0])
  {       
    columnaBarca = columna2 + " | " + obtenerEspacios();//verifica donde está barca para calcular la columna
  }
  if(lugares[1]->verVecino()==lugares[2])
  {
    columnaBarca = obtenerEspacios() + " | "+columna2+" ";//verifica donde está barca para calcular la columna
  }

  return "| "+ columna1 + " | " + columnaBarca + " | " + columna3 + " |\n";
}

string Jugador::obtenerEspacios()
{
  return string(longitudMaxNombre, ' ');//obtiene los espacios de la longitud
}


string Jugador::obtenerNombreIndividuo(Individuo *individuo)
{
  if(individuo == nullptr)
  {
    return obtenerEspacios();
  }
  return individuo->obtenerNombre(longitudMaxNombre);//obtiene el nombre del individuo acomodado con espacios
}

void Jugador::empezar() 
{
  string action;
  bool elJuegoContinua = true;

  while(elJuegoContinua)
  {
    this->mostrarPantalla();
    if(this->alguienHaMuerto() or this->ganar())
    {
      elJuegoContinua = false;
    }
    else
    {
      cout << "Que deseas hacer? ";
      getline(cin, action);

      if(lugarDelIndividuo(action)!=-1)
      {
        accionMoverIndividuo(action);
      }
      else if(action=="B")
      {
        accionMoverBarca();
      }
    }
  }
}

void Jugador::agregarIndividuo(Individuo *individuo)
{  
  if(individuo->obtenerNombre().size() > longitudMaxNombre)
  {
    longitudMaxNombre = individuo->obtenerNombre().size();//guarda en longitud maxima la longitus del nombre del individuo
  }
  cantidadIndividuos++;//le suma a cantidadIndividuos el individuo que agrego

  lugares[0]->add_individuo(individuo);
}

void Jugador::agregarIndividuo(Individuo *individuo, Lugar* lugarDestino)
{  
  lugarDestino->add_individuo(individuo);//añade un individuo a un lugar
}


bool Jugador::ganar()
{
  if(cantidadIndividuos == lugares[2]->size()) 
  {
    cout <<"GANASTE!!";//cuando todos los individuos están en derecha imprime que se gano
    return true;
  }
  return false;
}


bool Jugador::alguienHaMuerto()
{
  for(int i = 0; i < lugares.size(); i++)
  {
    Individuo *muerto = lugares[i]->verificarCadenaAlimenticia();
  
    if(muerto != nullptr and !lugares[i]->robotEsta())
    {
      cout << muerto->obtenerNombre() + " se ha comido a " + muerto->obtenerPresa()->obtenerNombre()+"\n" + "PERDISTE";//verifica si hay un muerto en algún lugar

      return true;
    }
  }
  
  return false;
}
