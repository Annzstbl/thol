#include "dispatch.h"
#include "fstream"
using namespace std;

int Dispatch::Read_car_()
{
	ifstream file_car(carPath_,ios::in);
	string data_car;
	int id, starting_cross, ending_cross, max_speed, estimated_time;
	if (!file_car)
		return 0;
	while (getline(file_car, data_car))
	{
		if (data_car[1] == '#')
			break;
		//sprintf(data_car,"")
	}

}
