#include <iostream>
using namespace std;


main()
{

int number;

cout << "Enter any number:  ";
cin >> number;


string num, num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16, num17;

if(number / 10 == 2)
{
num1 = "twenty";

}

if(number / 10 == 3)
{
num2 = "thirty";

}

if(number / 10 == 4)
{
num3 = "fourty";

}

if(number / 10 == 5)
{
num4 = "fifty";

}

if(number / 10 == 6)
{
num5 = "sixty";

}

if(number / 10 ==7)
{
num6 = "seventy";

}

if(number / 10 == 8)
{
num7 = "eighty";

}

if(number / 10 == 9)
{
num8 = "ninety";

}

if(number % 10 == 1)
{
num9 = "one";

}

if(number % 10 == 2)
{
num10 = "two";

}

if(number % 10 == 3)
{
num11 = "three";

}

if(number % 10 == 4)
{
num12 = "four";

}

if(number % 10 == 5)
{
num13 = "five";

}

if(number % 10 == 6)
{
num14 = "six";

}

if(number % 10 == 7)
{
num15 = "seven";

}

if(number % 10 == 8)
{
num16 = "eight";

}

if(number % 10 == 9)
{
num17 = "nine";

}

num = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10 + num11 + num12 + num13 +  num14 + num15 + num16 + num17;

cout << "Number is:  " << num;


}

