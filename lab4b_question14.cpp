#include <iostream>

using namespace std;



int sum_fn(int arr[],int start,int len)

{



    if (start>=len)

    {

      return 0;

    }



    return sum_fn(arr,start+1,len) + arr[start];

}





int main () {

  int arr[10],N,i;

  cout << "Enter length of the array : ";

  cin >> N;

  cout << "Enter elements of the array : ";

  for (i=0;i<N;i++)

  {

      cin >> arr[i];

  }



  cout << "Sum of the elements of the array = " <<  sum_fn(arr,0,N) << endl;

 return 0;

}
