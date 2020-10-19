/*
  Archivo: main.cpp
  Autor: Laura Moyao- David Velasco- Laura Suarez <laura.moyano@correounivalle.edu.co>
  Fecha creación: 2020-03-06
  Fecha última modificación: 2020-10-06
  Licencia: GNU-GPL
*/

/*
  Utilidad para la asignatura:Manejar las clases, relaciones entre ellas, la herencia, la encapsulación y todos los temas que abordan la programación orientada a objetos

  Historia: hay un robot que debe transportar un
  zorro, un conejo y una lechuga desde un lado del río hasta la otra orilla, usando una barca. 
  En la barca solo cabe uno de los tres 
  individuos, además del robot. El problema es 
  que si el robot deja solos al zorro y el conejo, el zorro se comerá el conejo. Y si deja solos al conejo y la lechuga, el conejo se comerá la lechuga. 
*/


#include <iostream>

#include "Jugador.h"
#include "Individuo.h"
#include "Barca.h"
#include "Orilla.h"

using namespace std;

int main() {
 
  
  Individuo *Lechuga = new Individuo("Lechuga", "L");
	Individuo *Conejo = new Individuo("Conejo", "C", Lechuga);
	Individuo *Zorro = new Individuo("Zorro", "Z", Conejo);
	Individuo *Robot = new Individuo("Robot", "R");

 
  Orilla *orilla_inicial= new Orilla("Izquierda");
  Orilla *orilla_final= new Orilla("Derecha");
  Barca *barca = new Barca("barca", orilla_inicial, orilla_final);
  

	Jugador jugador = Jugador();
  /*
	jugador.agregarIndividuo(Lechuga);
	jugador.agregarIndividuo(Zorro);
	jugador.agregarIndividuo(Robot);
	jugador.empezar();
  */
	return 0;
}
