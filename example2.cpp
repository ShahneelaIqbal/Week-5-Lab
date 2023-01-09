#include<iostream>
using namespace std;

float division(float number1, float number2);




main()
{
float number1;
float number2;
float total;

cout << "Enter first number:  ";
cin >> number1;
cout << "Enter second number:  ";
cin >> number2;

total = division(number1, number2);
cout << "Total is:  " << total << endl;
cout << "program ends !";


}

float division(float number1, float number2)
{
float divide;
divide = number1 / number2;

return divide;


}