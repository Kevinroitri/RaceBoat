
#include "Lancha.h"
#include <Windows.h>

//CONSTRUCTOR 

Lancha::Lancha(std::string pName, int pDistance, int pNitro, int pSpeed) {

	name = pName;
	distance = pDistance;
	nitro = pNitro;
	speed = pSpeed;


}

//GETTERS:

std::string Lancha::getName() {

	return name;
}

int Lancha::getDistance() {

	return distance;
}

int Lancha::getNitro() {

	return nitro;
}

int Lancha::getSpeed() {

	return speed;
}




//SETTERS:

void Lancha::setName(std::string pName) {

	name = pName;

}

void Lancha::setDistance(int pDistance) {

	distance = pDistance;

}

void Lancha::setNitro(int pNitro) {

	nitro = pNitro;

}

void Lancha::setSpeed(int pSpeed) {

	speed = pSpeed;

}