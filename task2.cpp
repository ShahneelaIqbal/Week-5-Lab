#include <iostream>
#include <cmath>
using namespace std;

float substraction (float num1, float num2, float num3);
float addition (float num1, float num2, float num3);


main()
{

 float num1;
 float num2;
 float num3;
 float answer1;
 float answer2;


 cout << "Enter number:  ";
 cin >> num1;
 cout << "Enter number:  ";
 cin >> num2;
 cout << "Enter number:  ";
 cin >> num3;

 answer1 = addition (num1, num2, num3);
 answer2 = substraction (num1, num2, num3);

 cout << "Answer is:  " << answer1 << endl;
 cout << "Answer is:  " << answer2 << endl;  
}











float addition (float num1, float num2, float num3)
{
 
  float discriminant;
  float root;
  float add;
  discriminant = (num2 * num2) - (4 * (5) * (1));
  root = sqrt(discriminant);
  add = (-num2 + root)/ (2 * (5));

  return add;

}

float substraction (float num1, float num2, float num3)
{
 
  float discriminant;
  float root;
  float sub;
  discriminant = (num2 * num2) - (4 * (5) * (1));
  root = sqrt(discriminant);
  sub = (-num2 - root)/ (2 * (5));

  return sub;

}

