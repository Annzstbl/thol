#pragma once
#include "car.h"
#include "road.h"
#include <vector>
class Road;
class Cross
{
public:
	Cross();
private:

	int num_road_;
	std::vector<Road*> roads;
	bool is_dispatched;
};