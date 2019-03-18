#pragma once
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
	int name_;				//������
	int estimated_time_;	//Ԥ�Ƴ���ʱ��
	int actual_time_;		//ʵ�ʳ���ʱ��
	int starting_point_;	//�����ص�
	int ending_point_;		//ֹͣ�ص�
	unsigned int max_speed_;		//����ٶ�
	unsigned int actual_speed_;		//ʵ���ٶ�
	//road *position_;	//��·��
	int road_order_;	//�ӵ����
	int road_position_;	//����λ��
	bool direction_;		//��С·�ڵ���·��Ϊ1

};