#include <iostream>
using namespace std;
int multiply(int number);

main()
{

 int number;
 int answer;

 cout << "Enter number:  ";
 cin >> number;

 answer = multiply(number);
 cout << "Product is:  " << answer << endl;


}

int multiply(int number)
{
 int product = 5 * number;

 return product;
}