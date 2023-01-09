# include <iostream>
using namespace std;
bool isSymmetrical(int number);


main()
{

 int number;
 bool answer; 

 cout << "Enter three digit number:  ";
 cin >> number;
 answer = isSymmetrical( number);

 if(answer == true)
{
cout << "Number is symmetrical";
}

if(answer == false)
{
cout << "Number is un-symmetrical";
}
 
}
 

bool isSymmetrical(int number)

{
 int rem1;
 int rem2;
 int rem3;

 int quo1;
 int quo2;
 int quo3;

 rem1 = number%10;
 quo1 = number/10;
 rem2 = quo1%10;
 quo2 = quo1/10;
 rem3 = quo2%10;

if(rem1 == rem3)
{
 return true;
}

if(rem1 != rem3)
{
 return false;
}
 return 0;

}
 












