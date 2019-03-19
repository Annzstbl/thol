#pragma once
#include "road.h"
#define CAR_NOT_DEPART 0	//car has not depart
#define CAR_WAITING	1		//car is wating to go
#define CAR_ENDING 2		//car has run in a cycle time
#define CAR_ARRIVING 3		//car has arrived in destination
class Car
{
public:
	Car(int id, int estimated_time, int starting_cross, int ending_cross,int max_speed) {
		id_ = id;
		estimated_time_ = estimated_time;
		starting_cross_ = starting_cross;
		ending_cross_ = ending_cross;
		max_speed_ = max_speed;
		status = CAR_WAITING;
	}
private:
	int id_;				//id
	int estimated_time_;
	int actual_time_;
	int starting_cross_;
	int ending_cross_;
	unsigned int max_speed_;
	unsigned int actual_speed_;
	Road *car_in_road;
	int *route;				//route
	int road_order_;
	int road_position_;
	bool direction_
	int status;				//car status:  0 1 2 3;

};