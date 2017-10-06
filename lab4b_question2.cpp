#include <iostream>

using namespace std;

void printNaturalNumbers(int lowerLimit, int upperLimit);



int main()
{
    int lowerLimit, upperLimit;

    /* Input lower and upper limit from user */
    cout<<"Enter lower limit: ";
    cin>>lowerLimit;
    cout<<"Enter upper limit: ";
    cin>>upperLimit;

    cout<<"All natural numbers from "<<lowerLimit<<" to "<<upperLimit<<endl ;
    printNaturalNumbers(lowerLimit, upperLimit);

    return 0;
}


/**
 * Recursively prints all natural number between the given range.
 */
void printNaturalNumbers(int lowerLimit, int upperLimit)
{
    if(lowerLimit > upperLimit)
        return;

    cout<<lowerLimit<<endl;

    // Recursively call the function to print next number
    printNaturalNumbers(lowerLimit + 1, upperLimit);
}
