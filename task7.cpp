#include <iostream>
using namespace std;

int time(int hour, int min);
int hours(int totalMinutes);
int minute(int totalMinutes);




main()
{
 int hour;
 int min;
 int answer1;
 int answer2;

 
 cout << "Enter time in hour:  ";
 cin >> hour;
 cout << "Enter time in min:  ";
 cin >> min;

 int total = time(hour, min);
 answer1 = hours(total);
 answer2 = minute(total);

 cout << answer1 << " : " << answer2 << endl;
}

int time(int hour, int min)
{
 int minutes;
 
 minutes = (hour * 60) + min;
 int totalMinutes = minutes+15;
 return totalMinutes;
}

 int hours(int totalMinutes)
{
 int hours;
 hours = (totalMinutes/60) % 24;
 return hours;
}

 int minute(int totalMinutes)
{
 int correctMin;
 correctMin = totalMinutes % 60;
 return correctMin; 
}
