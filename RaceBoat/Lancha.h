#include <iostream>

class Lancha {

private:
	std::string name;
	int distance;
	int nitro;
	int speed;




public:

	//Constructor

	Lancha(std::string pName, int pDistance, int pNitro, int pSpeed);


	//getters

	std::string getName();
	int getDistance();
	int getNitro();
	int getSpeed();



	//setters

	void setName(std::string pName);
	void setDistance(int pDistance);
	void setNitro(int pNitro);
	void setSpeed(int pSpeed);

};
