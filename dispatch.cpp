#include "dispatch.h"
#include "fstream"
using namespace std;

int Dispatch::Read_car_()
{
	vector<vector<int>> car_data ;
	car_data = loader.load_txt(carPath_);
	for(int i = 0 ; i < car_data.size() ; i++)
	{
		Car* car = new Car(car_data[i]);
		d_cars_.push_back(car);
	}
}

Dispatch::~Dispatch()
{
	//delete cars
	for(int i = 0 ; i < d_cars_.size(); i++)
	{
		delete d_cars_[i];
	}
}
