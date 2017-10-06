#include <iostream>
using namespace std;

int sum(int n);

int main()
{
int n;
cout<<"Enter upper limit : ";
cin>>n;
cout<<"The sum of all natural numbers between 1 and "<<n<<" = "<<sum(n);
return 0;
}

int sum(int n){
if (n>1){
return n+sum(n-1);
}
else{
return 1;
}
}
