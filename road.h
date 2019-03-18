#pragma once
#include "car.h"

#include <vector>
#include <unordered_set>

class Car;
class Cross;
class Road
{
public:

private:
	int id_;
	int length_;
	uint32_t max_speed_;
	int num_lane_;
	bool is_two_way_;
	

	Cross* start_;
	Cross* end_;
	std::unordered_set<Car> cars_;


};