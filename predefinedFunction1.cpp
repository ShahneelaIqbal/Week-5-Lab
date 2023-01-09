#include <iostream>
#include <cmath>
using namespace std;

main()
{
 int num1;
 int num2;
 int maximum;

 cout << "Enter number:  ";
 cin >> num1;
 cout << "Enter number:  ";
 cin >> num2;

 maximum=max(num1, num2);
 cout << maximum << " is maximum" << endl;

}