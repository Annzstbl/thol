#pragma once
#include "car.h"
#include "road.h"
#include "cross.h"
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
class Dispatch
{
public:
	Dispatch(string carPath, string roadPath, string crossPath, string answerPath)
	{
		carPath_ = carPath;
		roadPath_ = roadPath;
		crossPath_ = crossPath;
		answerPath_ = answerPath;
	}
	void Initiate_();							//read input files
	int Read_car_();
	int Read_road_();
	int Read_cross_();
	void Boost_one_();							//time = time + 1


private:
	string carPath_;
	string roadPath_;
	string crossPath_;
	string answerPath_;
	vector<Cross> d_crosses_;		//dispatch_crosses_;
	vector<Car> d_cars_;			//all cars
	vector<Road> d_roads_;

	std::vector<int> d_cars_driving_;			//cars which are driving in road
	std::vector<std::vector<int>> d_cars_route_;//cars route
	std::unordered_map<int,int> d_cars_startingtime_;

	unsigned int time_;
};