#include "car.h"
#include "road.h"
#include "cross.h"
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Dispatch()
{
public:
	Dispatch();
	Initiate();								//read input files
	Boost_one();							//time = time + 1


private:
	vector<Cross*> d_crosses_;		//dispatch_crosses_;
	vector<Car*> d_cars_;			//all cars
	vector<Road*> d_roads_;

	std::vector<int> d_cars_driving_;			//cars which are driving in road
	std::vector<std::vector<int>> d_cars_route_;//cars route
	std::unordered_map<int,int> d_cars_startingtime_;

	unsigned int time_;
}