#pragma once
#include "road.h"
class Car
{
public:
	Car(int name, int estimated_time, int starting_point, int ending_point,int max_speed) {
		name_ = name;
		estimated_time_ = estimated_time;
		starting_point_ = starting_point;
		ending_point_ = ending_point;
		max_speed_ = max_speed;
	}
	int name_;				//id
	int estimated_time_;	
	int actual_time_;		
	int starting_point_;	
	int ending_point_;		
	unsigned int max_speed_;		
	unsigned int actual_speed_;		
	Road *position_;	
	int road_order_;	
	int road_position_;	
	bool direction_;

};