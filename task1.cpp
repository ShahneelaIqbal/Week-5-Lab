#include <iostream>
#include <cmath>

using namespace std;

float calculateHeight(float distance, float degrees);

main()
{
  float base;
  float degrees;
  float height;

  cout << "Enter base:  ";
  cin >> base;
  cout << "Enter angle of elevation:  ";
  cin >> degrees;

  height = calculateHeight(base, degrees);
  cout << "Height of tree is:  " << height << endl;

}

float calculateHeight(float distance, float degrees)
{
 float radian = 57.2958; 
 float radians;
 float angle;
 float height;

 radians = degrees/radian;
 angle = tan(radians);
 height = angle * distance;

 return height; 



}