// CPP programm to find the leader in an array
#include<iostream>
using namespace std;
void leader (int arr[], int n)
   {
     int i,j,counter;
     for (i=0;i<n-1;i++)
     {
          counter=0;
        for (j=i+1;j<n;j++)
        
           {
              if (arr[i] > arr[j])
               {
                 counter=counter+1;
               
               }
           }
         if (counter == (n-(i+1)))
          {
            cout << "Leader in the array is: " << arr[i]<< endl;
          } 
     }
     cout << "Leader in the array is: " << arr[n-1]<< endl;
 }
 int main()
{ 
int n,i;
int a[10] {};
cout << "Enter the number of elements you want in an array and should be less than 10: " << endl;
cin >> n;
   for (i=0;i<n;i++)
{
    cout << "Enter the element: " << i << endl;
    cin >> a[i];
}
leader(a,n);
}
