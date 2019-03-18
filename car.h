#pragma once
class car
{
public:
	car(int name, int estimated_time, int starting_point, int ending_point,int max_speed) {
		name_ = name;
		estimated_time_ = estimated_time;
		starting_point_ = starting_point;
		ending_point_ = ending_point;
		max_speed_ = max_speed;
	}
	int name_;				//车名字
	int estimated_time_;	//预计出发时间
	int actual_time_;		//实际出发时间
	int starting_point_;	//出发地点
	int ending_point_;		//停止地点
	unsigned int max_speed_;		//最高速度
	unsigned int actual_speed_;		//实际速度
	//road *position_;	//道路号
	int road_order_;	//子道序号
	int road_position_;	//所处位置
	bool direction_;		//从小路口到大路口为1

};