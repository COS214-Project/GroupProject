#ifndef CURRENTELECTRONICS_H
#define CURRENTELECTRONICS_H
#include "CurrentCarPart.h"

class CurrentElectronics : public CurrentCarPart {

private:
	string ECUtype;
	int MGUpower;
	int BatteryEnergy;

public:
	CurrentElectronics(string a, int b, int c_int);

	~CurrentElectronics();

	CarPart* clone();

	void info();

	string getECUtype();

	void setECUtype(string ECUtype);

	int getMGUpower();

	void setMGUpower(int MGUpower);

	int getBatteryEnergy();

	void setBatteryEnergy(int BatteryEnergy);
};

#endif
