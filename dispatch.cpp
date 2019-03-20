#include "dispatch.h"
#include "fstream"
using namespace std;
int Read_car_(string car_path)
{
	ifstream file_car(car_path,ios::in);
	string dat;
	if (!file_car)
		return 0;
	//while()
	getline(file_car,dat);

}
