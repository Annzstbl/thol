#pragma once
#include "car.h"
#include "cross.h"
#include <unordered_set>

class Car;
class Cross;
class Road
{
public:
	Road(int id, int length, int max_speed, int num_lane, int cross_low, int cross_high, bool is_two_way){
		id_ = id;
		length_ = length;
		max_speed_ = max_speed;
		num_lane_ = num_lane;
		is_two_way_ = is_two_way;
		if (!is_two_way_){
			if (cross_low < cross_high){
				cross_low_to_high_ = true;
				cross_high_to_low_ = false;
				cross_low_ = cross_low;
				cross_high_ = cross_high;
			}
			else {
				cross_low_to_high_ = false;
				cross_high_to_low_ = true;
				cross_low_ = cross_high;
				cross_high_ = cross_low;
			}		
		}
		else {
			cross_low_to_high_ = true;
			cross_high_to_low_ = true;
		}
	}
private:
	int id_;						//road ID		
	int length_;					//road length
	int num_lane_;					//number of lane
	bool is_two_way_;				//1, available in two directions;0 only available in one direction
	bool cross_low_to_high_;
	bool cross_high_to_low_;
	uint32_t max_speed_;
	int num_car_;					//number of car in this road
	std::unordered_set<Car *> cars_;			//point to car in this road
	//std::vector<CPoint> road_car_position_;			//car position, [lane, distance]
	std::vector<bool> road_car_direction_;			//car direction:1,low to high; 0 high to low cross
	int cross_low_;									//cross owing lower ID
	int cross_high_;								//cross owing higher ID
	Cross* start_;
	Cross* end_;

	Road *left_turn_;
	Road *right_turn_;
	Road *straight_;
};