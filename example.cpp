#include<iostream>
using namespace std;

int add(int number1, int number2);




main()
{
int number1;
int number2;
int total;

cout << "Enter first number:  ";
cin >> number1;
cout << "Enter second number:  ";
cin >> number2;

total = add(number1, number2);
cout << "Total is:  " << total << endl;
cout << "program ends !";


}

int add(int number1, int number2)
{
int sum;
sum = number1 + number2;
return sum;


}