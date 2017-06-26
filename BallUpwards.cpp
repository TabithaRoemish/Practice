//BallUpwards - 6 kyu
// Instructions: You throw a ball vertically upwards with an initial speed v (in km per hour). 
//		The height h of the ball each time t is give by h=v*t-.5*g*t*t where g is earth's gravity (g ~ 9.81 m/s**2).
//		A device is recording at every tenth of a second the height of the ball. 
//		For example with v = 15 km/h the device gets soemthing of the following form: 
//			(0.0.0), (1, 0.367..), (2, 0.637...)...
//		where the first number is the time in tenth of second and the second number the height in meters. 
//		--Write a function max_ball with the parameter (v (in km per hour) that returns the time in tenth of second 
//			of the maximum height recorded by the device. 
//		Example: max_ball(15) should return 4, max_ball(25) should return 7
//		* Remember to conver the veloecity from hm/h to m/s or from m/s in km/h when necesary
//		* The maximum height recorded by the device is not necessarily the maximum height reach by the ball. 
//
//		Given:
//		class Ball
//		{
//			public: static int maxBall(int v0);
//		};
//  https://www.codewars.com/kata/566be96bb3174e155300001b/train/cpp
//-----------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

class Ball
{
	public: static int maxBall(int v0);
};

int Ball::maxBall(int v0)
{
	double maxHeight = 0.0;
	double maxCompare = 0.0;
	double t = 0;
	do
	{
		t++;
		maxCompare = maxHeight;
		maxHeight = (v0 / 3.6) * (t / 10) - .5*9.81*(t / 10)*(t / 10);	
	} while (maxHeight > maxCompare);

	t--;
	return static_cast<int>(t);
}

int main()
{
	Ball test;
	cout << test.maxBall(15) << ": 4?" << endl;
	cout << test.maxBall(25) << ": 7?" << endl;
}