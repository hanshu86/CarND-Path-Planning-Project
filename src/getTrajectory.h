//getTrajectory.h

#ifndef GET_TRAJECTORY_H
#define GET_TRAJECTORY_H

#include <vector>

#include "helpers.h"

void getTrajectory(vector<double> &next_x_vals, vector<double> &next_y_vals, vector<double> &car,
	vector<vector<double>>& map_waypoints) {

	double dist_inc = 0.45;
	for(int i = 0; i < 50; i++) {
		double new_s = car[2] + (i + 1)*dist_inc;
		double new_d = car[3];
		vector<double> next_xy = getXY(new_s, new_d, map_waypoints[2], map_waypoints[0], map_waypoints[1]);  
		next_x_vals.push_back(next_xy[0]);
		next_y_vals.push_back(next_xy[1]);
	}
} 

#endif // GET_TRAJECTORY_H