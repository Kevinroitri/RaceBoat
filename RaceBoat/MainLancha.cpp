#include "Lancha.h"
#include <iostream>
#include <windows.h>

void jugar(Lancha& player);

int main() {

	srand(time(NULL));

	int turnos = 1;

	Lancha Jugador1("Kevin Roig", 0, 1, 0), Jugador2("Guillem el loco", 0, 1, 0);

	while (turnos < 6)
	{

		std::cout << "Turno del JUGADOR 1 " << std::endl;
		std::cout << "Numero de turno: " << turnos << std::endl;
		Sleep(1000);
		jugar(Jugador1);
		std::cout << "Turno del JUGADOR 2" << std::endl;
		std::cout << "Numero de turno: " << turnos << std::endl;
		Sleep(1000);
		jugar(Jugador2);

		turnos++;

	}

	if (Jugador1.getDistance() > Jugador2.getDistance())
	{
		std::cout << "El JUGADOR 1 ha ganado con una distancia recorrida de " << Jugador1.getDistance() << " Km" << std::endl;
	}
	else {

		std::cout << "El JUGADOR 1 ha ganado con una distancia recorrida de " << Jugador2.getDistance() << " Km" << std::endl;

	}

	return 0;

}

void jugar(Lancha& player) {

	int opcion = 0;
	int dado = 0;
	int random = 0;

	dado = (rand() % 6) + 1;
	std::cout << "Tienes una velocidad de: " << player.getSpeed() << std::endl;
	Sleep(1000);
	player.setSpeed(player.getSpeed() + dado);
	std::cout << "Te ha salido el numero " << dado << " en el dado" << std::endl;
	Sleep(1000);
	std::cout << "Tu nueva velocidad es de: " << player.getSpeed() << std::endl;
	Sleep(1000);

	if (player.getNitro() == 1)
	{
		std::cout << "Quieres usar el nitro SI con la tecla [1] No con la tecla [2] " << std::endl;
		Sleep(1000);
		std::cin >> opcion;

		if (opcion == 1)
		{
			random = rand() % 2;

			if (random == 0)
			{
				player.setSpeed(player.getSpeed() / 2);
				std::cout << "La velocidad se ha reducido a la mitad con: " << player.getSpeed() << std::endl;
			}
			else {

				player.setSpeed(player.getSpeed() * 2);
				std::cout << "La velocidad se ha duplicado con: " << player.getSpeed() << std::endl;
			}

			player.setNitro(0);

		}
		else {

			std::cout << "No se usara nitro " << std::endl;
			Sleep(1000);

		}

	}
	else {

		std::cout << " tienes " << player.getNitro() << " de Nitro " << std::endl;
		Sleep(1000);

	}

	player.setDistance(player.getDistance() + player.getSpeed() * 100);

	std::cout << "El Jugador " << player.getName() << " a recorrido una distancia de " << player.getDistance() << " KM \n" << std::endl;
	Sleep(1000);
}