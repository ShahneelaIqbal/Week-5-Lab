#include <iostream>
using namespace std;
string isCapital(char alphabet);


main()
{
 char alphabet;
 string answer; 

 cout << "Enter alphabet:  ";
 cin >> alphabet;
 
 answer = isCapital(alphabet);

 cout << answer;
 cout << alphabet;

}

string isCapital(char alphabet)
{
 if(alphabet >= 65 && alphabet <= 90)
 {
	return "You have entered an uppercase letter " ;    
 }
 
 if(alphabet >= 97 && alphabet <= 122)
 {
	return "You have entered a lowercase letter " ;    
 }

}