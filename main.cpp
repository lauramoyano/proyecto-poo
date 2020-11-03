/*
  Archivo: main.cpp
  Autor: Laura Moyao- David Velasco- Laura Suarez <laura.moyano@correounivalle.edu.co>
  Fecha creación: 2020-10-10
  Fecha última modificación: 2020-10-30
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

int main() 
{
  
  Individuo *lechuga = new Individuo("Lechuga", "L");
	Individuo *conejo = new Individuo("Conejo", "C", lechuga);
	Individuo *zorro = new Individuo("Zorro", "Z", conejo);
	Individuo *robot = new Individuo("Robot", "R");
  //Individuo *robotcito = new Individuo("Robotcito", "L", zorro);
  
  
  Orilla *orilla_inicial= new Orilla("Izquierda");
  Orilla *orilla_final= new Orilla("Derecha");
  Barca *barca = new Barca("Barca", orilla_inicial, orilla_final);

  orilla_inicial->conocerBarca(barca);
  orilla_final->conocerBarca(barca);
  orilla_inicial->cambiarVecino();
  
	Jugador *laurita = new Jugador(orilla_inicial, orilla_final, barca);
  
  laurita->agregarIndividuo(lechuga);
	laurita->agregarIndividuo(conejo);
	laurita->agregarIndividuo(zorro);
	laurita->agregarIndividuo(robot);
  //laurita->agregarIndividuo(robotcito);
  
  
	laurita->empezar();
  
  delete orilla_inicial;
  delete orilla_final;
  delete barca;
  delete laurita;

	return 0;
}