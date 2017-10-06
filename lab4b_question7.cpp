#include <iostream>
using namespace std;

int reversal(int n, int rev=0)
{
if(n>0)
{
rev=rev*10 + n%10;
rev=reversal(n/10,rev);
}
return rev;
} 


int main()
{
int n;
cout<<"Enter a number : ";
cin>>n;
if(reversal(n)==n)
cout<<"\nPalindrome";
else 
cout<<"\nNot a palidrome";


return 0;
}

