// CPP programm for Largest Sum Contiguous Subarray
#include<iostream>
using namespace std;
int main()
{
 int a[40];
int i,j,k,sum,count,counter,out,n;
cout << "Enter the size of Array" << endl;
cin>> n;
for (i=0;i<n;i++)
{
cout << "Enter the element: " << i << endl;
cin >> a[i];
}
cout << "Enter the sum you want to find in array" << endl;
cin>> sum;
count=0;
counter=0;
for (i=0;i<n-2;i++)
  {
     
     for (j=i+1;j<n-1;j++)
      {
         for (k=j+1;k<n;k++)
           {
             out=a[i]+a[j]+a[k];
               if (out == sum)
               {
                cout << "The triplet that equals the sum is "<< a[i] << ","<< a[j] << ","<< a[k] << endl;
              }
           }
      }

 }
 } 
