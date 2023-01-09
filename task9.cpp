#include <iostream>
using namespace std;

main()
{

    int volumeOfPool;
    int flowRateOfFirstPipe;
    int flowRateOfSecondPipe;
    float hoursOfAbsence;
    int totalWaterInPoolAfterHours;

    cout << "Volume of pool:  ";
    cin >> volumeOfPool;

    cout << "Flow Rate Of First Pipe:  ";
    cin >> flowRateOfFirstPipe;

    cout << "Flow Rate Of second Pipe:  ";
    cin >> flowRateOfSecondPipe;

    cout << "Time:  ";
    cin >> hoursOfAbsence;

    totalWaterInPoolAfterHours = (flowRateOfFirstPipe * hoursOfAbsence) + (flowRateOfSecondPipe * hoursOfAbsence);

    if (totalWaterInPoolAfterHours < volumeOfPool)
    {
        int percentage = (totalWaterInPoolAfterHours * 100) / volumeOfPool;
        int percentageOfFirstPipe = (flowRateOfFirstPipe * hoursOfAbsence * 100) / totalWaterInPoolAfterHours;
        int percentageOfSecondPipe = (flowRateOfSecondPipe * hoursOfAbsence * 100) / totalWaterInPoolAfterHours;

        cout << "The pool is " << percentage << "% full. Pipe1: " << percentageOfFirstPipe << "% Pipe2: " << percentageOfSecondPipe << "%";
    }

    if (totalWaterInPoolAfterHours > volumeOfPool)
    {
        int overFlowWater = totalWaterInPoolAfterHours - volumeOfPool;

        cout << "For " << hoursOfAbsence << " hours the pool overflows with " << overFlowWater << " liters";
    }
}