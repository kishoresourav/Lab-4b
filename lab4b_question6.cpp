#include <iostream>
using namespace std;

int reversal(int rev, int n)
{
if(n>0)
{
rev=rev*10 + n%10;
rev=reversal(rev,n/10);
}
return rev;
} 


int main()
{
int n;
cout<<"Enter a number : ";
cin>>n;
cout<<"The reverse of the number : "<<reversal(0,n);
return 0;
}

