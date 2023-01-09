#include <iostream>
#include <cmath>
using namespace std;

main()
{
 int num1;
 int num2;
 int minimum;

 cout << "Enter number:  ";
 cin >> num1;
 cout << "Enter number:  ";
 cin >> num2;

 minimum=min(num1, num2);
 cout << minimum << " is minimum" << endl;

}