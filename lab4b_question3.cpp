#include <iostream>

using namespace std;

void EvenAndOdd(int stVal, int n);

int main()
{
    int n;

    cout<<" Input the range to print starting from 1 : ";
    cin>>n;

    cout<<"\n All even numbers from 1 to "<<n<<" are : ";
    EvenAndOdd(2, n);//call the function EvenAndOdd for even numbers
    cout<<"\n All odd numbers from 1 to "<<n<<" are : ";
    EvenAndOdd(1, n);// call the function EvenAndOdd for odd numbers


    return 0;
}
void EvenAndOdd(int stVal, int n)
{
    if(stVal > n)
        return;
    cout<<stVal<<endl;
    EvenAndOdd(stVal+2, n);//calling the function EvenAndOdd itself recursively
}

