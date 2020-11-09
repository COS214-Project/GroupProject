#ifndef NEWELECTRONICS_H
#define NEWELECTRONICS_H
#include "NewCarPart.h"

class NewElectronics : public NewCarPart {

private:
	string ECUtype;
	int MGUpower;
	int BatteryEnergy;

public:
	NewElectronics(string a, int b, int c_int);

	~NewElectronics();

	CarPart* clone();

	void info();

	void compare(CarPart* c);

	string getECUtype();

	void setECUtype(string ECUtype);

	int getMGUpower();

	void setMGUpower(int MGUpower);

	int getBatteryEnergy();

	void setBatteryEnergy(int BatteryEnergy);
};

#endif
