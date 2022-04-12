// CPP programm to find unique elements in an array
#include<iostream>
using namespace std;
int main()
{
int i,j,n,count,a[20],counter;
cout << "Enter the size of Array" << endl;
cin>> n;
for (i=0;i<n;i++)
{
cout << "Enter the element: " << i << endl;
cin >> a[i];
}
for (i=0;i<n;i++)
  {
       counter=0;
       count=0;
      for (j=0;j<i-1;j++)
      {
          if ((a[i]==a[j]) && (i!=j))
             counter=counter+1;
      }
    if (counter!=0)
           continue;
           else
    {
      for (j=i+1;j<n;j++)
       {
            if (a[i]==a[j])
              {
                    count=count+1;
              }
       }
         if (count==0)
         {
          cout << a[i] << "is a unique elememt"<< endl;
         }
                                                                                                                 
  }
 }
 }


