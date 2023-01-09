#include <iostream>
using namespace std;

int isEven(int number);



main()
{
 int number; 
 int answer; 

 cout << "Enter a five digit number:  ";
 cin >> number;
 
 answer = isEven(number); 
 
 if(answer == 0)
 {
  cout << "This number is Evenish.";

 }

 if(answer != 0)
 {
  cout << "This number is Oddish.";

 }

}

int isEven(int number)
{

 int rem1;
 int rem2;
 int rem3;
 int rem4;
 int rem5;

 int quo1;
 int quo2;
 int quo3;
 int quo4;
 
 int sum;
 int division;   

 rem1 = number%10;
 quo1 = number/10;

 rem2 = quo1%10;
 quo2 = quo1/10;

 rem3 = quo2%10;
 quo3 = quo2/10;

 rem4 = quo3%10;
 quo4 = quo3/10;

 rem5 = quo4%10;
  
 sum = rem1 + rem2 + rem3 + rem4 + rem5;
 
 division = sum%2; 
 
 return division;

}