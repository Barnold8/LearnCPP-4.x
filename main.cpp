#include "pch.h"
#include <iostream>
#include "MyHeader.h"
#include <iomanip>
#include "constants.h"

//Extra credit: This one is a little more challenging.
// 
//Write a short program to simulate a ball being dropped off of a tower.To start, the user should be asked for the height of the tower in meters.
// 
//Assume normal gravity(9.8 m / s2), and that the ball has no initial velocity(the ball is not moving to start).
// 
//Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds.The ball should not go underneath the ground(height 0).
// 
//Your program should include a header file named constants.h that contains a symbolic constant to hold the value of gravity(9.8).
// 
//Use a function to calculate the height of the ball after x seconds.
// 
//The function can calculate how far the ball has fallen after x seconds using the following formula : distance fallen = gravity_constant * x_seconds2 / 2


float getTowerHeight() {

	float height{};

	std::cout << "What is the height of the tower?(in meters)\t";

	std::cin >> height;

	return height;


}

void falling(int seconds, float towerHeight) {

	for (int i = 0; i < seconds; i++) {
		if (i != 0){
		double distance_fallen = MyConstants::gravity * i / 2;
		if (distance_fallen <= 0) {
			
			std::cout << "Ball has reached the ground :(" << std::endl;

			return;
		
		}
		std::cout << "Ball has been falling for " << i << " seconds!\n\nThe ball is at " << towerHeight - distance_fallen << "m" << std::endl;

		}
	}
}


int main()
{

	falling(5, getTowerHeight());

	return 0;

}
