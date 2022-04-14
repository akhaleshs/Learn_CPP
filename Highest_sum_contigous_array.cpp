// CPP programm for Largest Sum Contiguous Subarray
#include<iostream>
using namespace std;
int main()
{
signed int a[20],max[30];
int i,j,sum,counter,n;
cout << "Enter the size of Array" << endl;
cin>> n;
for (i=0;i<n;i++)
{
cout << "Enter the element: " << i << endl;
cin >> a[i];
}
counter=0;
for (i=0;i<n-1;i++)
{
    sum=a[i];
   for (j=i+1;j<n;j++)
      {
          sum=sum+a[j];
          max[counter]=sum;
          counter=counter+1;
      }
}
for(i = 1;i < counter-1; ++i) {

    // Change < to > if you want to find the smallest element
    if(max[0] < max[i])
      max[0] = max[i];
  }
cout << endl << "Largest element = " << max[0];
}
